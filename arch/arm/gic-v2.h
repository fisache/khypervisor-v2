#ifndef __GIC_H__
#define __GIC_H__

#include <stdint.h>
#include <core/interrupt.h>

#define GIC_NUM_MAX_IRQS                1024
#define GIC_INT_PRIORITY_DEFAULT        0xa0
#define VGIC_NUM_MAX_SLOTS              64

#define GICD_READ(offset)           __readl(GICv2.gicd + offset)
#define GICD_WRITE(offset, value)   __writel(value, GICv2.gicd + offset)

#define GICC_READ(offset)           __readl(GICv2.gicc + offset)
#define GICC_WRITE(offset, value)   __writel(value, GICv2.gicc + offset)

#define GICH_READ(offset)           __readl(GICv2.gich + offset)
#define GICH_WRITE(offset, value)   __writel(value, GICv2.gich + offset)

enum virq_state {
    VIRQ_STATE_INACTIVE = 0x00,
    VIRQ_STATE_PENDING = 0x01,
    VIRQ_STATE_ACTIVE = 0x02,
    VIRQ_STATE_PENDING_ACTIVE = 0x03,
};

struct GICv2_HW {
    uint32_t gicd;
    uint32_t gicc;
    uint32_t gich;
    uint32_t ITLinesNumber;
    uint32_t CPUNumber;
    uint32_t num_lr;
    uint32_t valid_lr_mask;
} GICv2;

#define GIC_SIGNATURE_INITIALIZED   0x5108EAD7

#define IRQ_LEVEL_TRIGGERED     0
#define IRQ_EDGE_TRIGGERED      1
#define IRQ_N_N_MODEL           0
#define IRQ_1_N_MODEL           1   /* every SPIs must be set 1:N model */

#define gic_cpumask_current()    (1u << smp_processor_id())

enum gic_sgi {
    GIC_SGI_SLOT_CHECK = 1,
};

void gic_enable_irq(uint32_t irq);
void gic_disable_irq(uint32_t irq);
void gic_init(void);
void gic_deactivate_irq(uint32_t irq);
void gic_completion_irq(uint32_t irq);

void gic_configure_irq(uint32_t irq, uint8_t polarity);
uint32_t gic_get_irq_number(void);
void gic_set_sgi(const uint32_t target, uint32_t sgi);

/* GICH related functions */
void gich_enable(uint8_t enable);

hvmm_status_t gic_inject_pending_irqs(vcpuid_t vcpuid);
uint32_t gic_inject_virq(uint32_t virq, uint32_t slot, enum virq_state state,
                          uint32_t priority, uint8_t hw, uint32_t physrc,
                          uint8_t maintenance);

hvmm_status_t virq_inject(vcpuid_t vcpuid, uint32_t virq, uint32_t pirq, uint8_t hw);
hvmm_status_t gic_sgi(uint32_t cpu, enum gic_sgi sgi);

#endif

