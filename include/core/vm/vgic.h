#ifndef __VGIC_H__
#define __VGIC_H__

#include <stdlib.h>

/* Banked Registers Size */
#define NR_BANKED_IPRIORITYR  8
#define NR_BANKED_ITARGETSR   8
#define NR_BANKED_CPENDSGIR   4
#define NR_BANKED_SPENDSGIR   4

// Per VM
struct gicd {
    uint32_t CTLR;          /*0x000 RW*/
    uint32_t TYPER;         /*      RO*/
    uint32_t IIDR;          /*      RO*/

    uint32_t *IGROUPR;      /* 0x080 */
    uint32_t *ISENABLER;    /* 0x100, ISENABLER/ICENABLER */
    uint32_t *ICENABLER;    /* 0x100, ISENABLER/ICENABLER */
    uint32_t *ISPENDR;      /* 0x200, ISPENDR/ICPENDR */
    uint32_t *ICPENDR;      /* 0x200, ISPENDR/ICPENDR */
    uint32_t *ISACTIVER;    /* 0x300, ISACTIVER/ICACTIVER */
    uint32_t *ICACTIVER;    /* 0x300, ISACTIVER/ICACTIVER */
    uint32_t *IPRIORITYR;   /* 0x400 */
    uint32_t *ITARGETSR;    /* 0x800 [0]: RO, Otherwise, RW */
    uint32_t *ICFGR;        /* 0xC00 */

    uint32_t *NSACR;        /* 0xE00 */
    uint32_t SGIR;          /* 0xF00 WO */
};

// Per Core
struct gicd_banked {
    uint32_t IGROUPR;
    uint32_t ISENABLER;
    uint32_t ICENABLER;
    uint32_t ISPENDR;
    uint32_t ICPENDR;
    uint32_t ISACTIVER;
    uint32_t ICACTIVER;
    uint32_t IPRIORITYR[NR_BANKED_IPRIORITYR];
    uint32_t ITARGETSR[NR_BANKED_ITARGETSR];
    uint32_t ICFGR;
    uint32_t CPENDSGIR[NR_BANKED_CPENDSGIR];
    uint32_t SPENDSGIR[NR_BANKED_SPENDSGIR];
};

struct vgic {
    struct gicd gicd;
};

void vgic_setup();

void vgic_create(struct vgic *vgic);
void vgic_init(struct vgic *vgic);

#endif /* __VGIC_H__ */

