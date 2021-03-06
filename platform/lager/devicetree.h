#include <vm_map.h>
#include <size.h>

struct memdesc_t vm_device_md[] = {
    {"interrupt-controller_1", 0xf1001000, 0xf1001000, 0x1000, MEMATTR_DEVICE_MEMORY, 0},
    {"interrupt-controller_4", 0xf1002000, 0xf1006000, 0x2000, MEMATTR_DEVICE_MEMORY, 1},
    {"gpio_1", 0xe6050000, 0xe6050000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"gpio_2", 0xe6051000, 0xe6051000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"gpio_3", 0xe6052000, 0xe6052000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"gpio_4", 0xe6053000, 0xe6053000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"gpio_5", 0xe6054000, 0xe6054000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"gpio_6", 0xe6055000, 0xe6055000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"thermal_1", 0xe61f0000, 0xe61f0000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"thermal_2", 0xe61f0100, 0xe61f0100, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"timer_1", 0xffca0000, 0xffca0000, 0x2000, MEMATTR_DEVICE_MEMORY, 1},
    {"timer_2", 0xe6130000, 0xe6130000, 0x2000, MEMATTR_DEVICE_MEMORY, 1},
    {"interrupt-controller_1", 0xe61c0000, 0xe61c0000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"dma-controller_1", 0xe6700000, 0xe6700000, 0x20000, MEMATTR_DEVICE_MEMORY, 1},
    {"dma-controller_2", 0xe6720000, 0xe6720000, 0x20000, MEMATTR_DEVICE_MEMORY, 1},
    {"dma-controller_3", 0xec700000, 0xec700000, 0x10000, MEMATTR_DEVICE_MEMORY, 1},
    {"dma-controller_4", 0xec720000, 0xec720000, 0x10000, MEMATTR_DEVICE_MEMORY, 1},
    {"dma-controller_5", 0xe65a0000, 0xe65a0000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"dma-controller_6", 0xe65b0000, 0xe65b0000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"i2c_1", 0xe6508000, 0xe6508000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"i2c_2", 0xe6518000, 0xe6518000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"i2c_3", 0xe6530000, 0xe6530000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"i2c_4", 0xe6540000, 0xe6540000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"i2c_5", 0xe6500000, 0xe6500000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"i2c_6", 0xe6510000, 0xe6510000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"i2c_7", 0xe6520000, 0xe6520000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"i2c_1", 0xe60b0000, 0xe60b0000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"mmc_1", 0xee200000, 0xee200000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"mmc_2", 0xee220000, 0xee220000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"pfc_1", 0xe6060000, 0xe6060000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"sd_1", 0xee100000, 0xee100000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"sd_2", 0xee120000, 0xee120000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"sd_3", 0xee140000, 0xee140000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"sd_4", 0xee160000, 0xee160000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"serial_1", 0xe6c40000, 0xe6c40000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"serial_2", 0xe6c50000, 0xe6c50000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"serial_3", 0xe6c60000, 0xe6c60000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"serial_4", 0xe6c20000, 0xe6c20000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"serial_5", 0xe6c30000, 0xe6c30000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"serial_6", 0xe6ce0000, 0xe6ce0000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"serial_7", 0xe6e60000, 0xe6e60000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"serial_8", 0xe6e68000, 0xe6e68000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"serial_9", 0xe62c0000, 0xe62c0000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"serial_10", 0xe62c8000, 0xe62c8000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"ethernet_1", 0xee700000, 0xee700000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"ethernet_2", 0xe6800000, 0xe6800000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"sata_1", 0xee300000, 0xee300000, 0x2000, MEMATTR_DEVICE_MEMORY, 1},
    {"sata_2", 0xee500000, 0xee500000, 0x2000, MEMATTR_DEVICE_MEMORY, 1},
    {"usb_1", 0xe6590000, 0xe6590000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"usb-phy_2", 0xe6590100, 0xe6590100, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"video_1", 0xe6ef0000, 0xe6ef0000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"video_2", 0xe6ef1000, 0xe6ef1000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"video_1", 0xe6ef2000, 0xe6ef2000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"video_2", 0xe6ef3000, 0xe6ef3000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"vsp1_1", 0xfe920000, 0xfe920000, 0x8000, MEMATTR_DEVICE_MEMORY, 1},
    {"vsp1_2", 0xfe928000, 0xfe928000, 0x8000, MEMATTR_DEVICE_MEMORY, 1},
    {"vsp1_3", 0xfe930000, 0xfe930000, 0x8000, MEMATTR_DEVICE_MEMORY, 1},
    {"vsp1_4", 0xfe938000, 0xfe938000, 0x8000, MEMATTR_DEVICE_MEMORY, 1},
    {"display_1", 0xfeb00000, 0xfeb00000, 0x70000, MEMATTR_DEVICE_MEMORY, 1},
    {"display_2", 0xfeb90000, 0xfeb90000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"display_3", 0xfeb94000, 0xfeb94000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"can_1", 0xe6e80000, 0xe6e80000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"can_2", 0xe6e88000, 0xe6e88000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"jpeg-codec_1", 0xfe980000, 0xfe980000, 0x11000, MEMATTR_DEVICE_MEMORY, 1},
    {"cpg_clocks_1", 0xe6150000, 0xe6150000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"sd2_clk_1", 0xe6150078, 0xe6150078, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"sd3_clk_1", 0xe615026c, 0xe615026c, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"mmc0_clk_1", 0xe6150240, 0xe6150240, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"mmc1_clk_1", 0xe6150244, 0xe6150244, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"ssp_clk_1", 0xe6150248, 0xe6150248, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"ssprs_clk_1", 0xe615024c, 0xe615024c, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"mstp0_clks_1", 0xe6150130, 0xe6150130, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"mstp0_clks_2", 0xe6150030, 0xe6150030, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"mstp1_clks_1", 0xe6150134, 0xe6150134, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"mstp1_clks_2", 0xe6150038, 0xe6150038, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"mstp2_clks_1", 0xe6150138, 0xe6150138, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"mstp2_clks_2", 0xe6150040, 0xe6150040, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"mstp3_clks_1", 0xe615013c, 0xe615013c, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"mstp3_clks_2", 0xe6150048, 0xe6150048, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"mstp4_clks_1", 0xe6150140, 0xe6150140, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"mstp4_clks_2", 0xe615004c, 0xe615004c, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"mstp5_clks_1", 0xe6150144, 0xe6150144, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"mstp5_clks_2", 0xe615003c, 0xe615003c, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"mstp7_clks_1", 0xe615014c, 0xe615014c, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"mstp7_clks_2", 0xe61501c4, 0xe61501c4, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"mstp8_clks_1", 0xe6150990, 0xe6150990, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"mstp8_clks_2", 0xe61509a0, 0xe61509a0, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"mstp9_clks_1", 0xe6150994, 0xe6150994, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"mstp9_clks_2", 0xe61509a4, 0xe61509a4, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"mstp10_clks_1", 0xe6150998, 0xe6150998, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"mstp10_clks_2", 0xe61509a8, 0xe61509a8, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"spi_1", 0xe6b10000, 0xe6b10000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"partition_1", 0x40000, 0x40000, 0xca9290, MEMATTR_DEVICE_MEMORY, 1},
    {"partition_2", 0x440000, 0x440000, 0xca9470, MEMATTR_DEVICE_MEMORY, 1},
    {"spi_1", 0xe6e20000, 0xe6e20000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"spi_2", 0xe6e10000, 0xe6e10000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"spi_3", 0xe6e00000, 0xe6e00000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"spi_4", 0xe6c90000, 0xe6c90000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"usb_1", 0xee000000, 0xee000000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"pci_1", 0xee090000, 0xee090000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"pci_2", 0xee080000, 0xee080000, 0x2000, MEMATTR_DEVICE_MEMORY, 1},
    {"pci_3", 0xee0b0000, 0xee0b0000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"pci_4", 0xee0a0000, 0xee0a0000, 0x2000, MEMATTR_DEVICE_MEMORY, 1},
    {"pci_5", 0xee0d0000, 0xee0d0000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"pci_6", 0xee0c0000, 0xee0c0000, 0x2000, MEMATTR_DEVICE_MEMORY, 1},
    {"pcie_7", 0xfe000000, 0xfe000000, 0x80000, MEMATTR_DEVICE_MEMORY, 1},
    {"sound_1", 0xec500000, 0xec500000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"sound_2", 0xec5a0000, 0xec5a0000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"sound_3", 0xec540000, 0xec540000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"sound_4", 0xec541000, 0xec541000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"sound_5", 0xec740000, 0xec740000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"mmu_1", 0xe6280000, 0xe6280000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"mmu_2", 0xe6290000, 0xe6290000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"mmu_3", 0xe6740000, 0xe6740000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"mmu_4", 0xec680000, 0xec680000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"mmu_5", 0xfe951000, 0xfe951000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"mmu_6", 0xffc80000, 0xffc80000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"memory_1", 0x40000000, 0x40000000, 0x40000000, MEMATTR_NORMAL_WB_CACHEABLE, 1},
    {"reset_1", 0xe6160000, 0xe6160000, 0x20000, MEMATTR_DEVICE_MEMORY, 1},
    {"arm-generic-counter_1", 0xe6080000, 0xe6080000, 0x20000, MEMATTR_DEVICE_MEMORY, 1},
    {"inter-connect-ram1_1", 0xe63c0000, 0xe63c0000, 0x50000, MEMATTR_DEVICE_MEMORY, 1},
    {"sysc_1", 0xe6180000, 0xe6180000, 0x40000, MEMATTR_DEVICE_MEMORY, 1},

    {"PRR", 0xff000000, 0xff000000, 0x1000, MEMATTR_DEVICE_MEMORY, 1},
    {"powervr", 0xfd000000, 0xfd000000, 0x10000, MEMATTR_DEVICE_MEMORY, 1},

    {0, 0, 0, 0, 0, 0}
};
