#include <linux/module.h>
#define INCLUDE_VERMAGIC
#include <linux/build-salt.h>
#include <linux/elfnote-lto.h>
#include <linux/vermagic.h>
#include <linux/compiler.h>

BUILD_SALT;
BUILD_LTO_INFO;

MODULE_INFO(vermagic, VERMAGIC_STRING);
MODULE_INFO(name, KBUILD_MODNAME);

__visible struct module __this_module
__section(".gnu.linkonce.this_module") = {
	.name = KBUILD_MODNAME,
	.init = init_module,
#ifdef CONFIG_MODULE_UNLOAD
	.exit = cleanup_module,
#endif
	.arch = MODULE_ARCH_INIT,
};

MODULE_INFO(intree, "Y");

#ifdef CONFIG_RETPOLINE
MODULE_INFO(retpoline, "Y");
#endif

static const struct modversion_info ____versions[]
__used __section("__versions") = {
	{ 0x460c70a6, "module_layout" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x24171c72, "ata_sff_port_ops" },
	{ 0xa777513a, "ata_bmdma_port_ops" },
	{ 0x44ff416b, "ata_pci_remove_one" },
	{ 0xf33e7baf, "ata_common_sdev_attrs" },
	{ 0xa6cc2a65, "ata_ncq_sdev_attrs" },
	{ 0x3e20f8bd, "ata_scsi_unlock_native_capacity" },
	{ 0xd07c1b38, "ata_std_bios_param" },
	{ 0x6c0943ed, "ata_scsi_dma_need_drain" },
	{ 0x87265729, "ata_scsi_change_queue_depth" },
	{ 0x92e0878, "ata_scsi_slave_destroy" },
	{ 0x6aeebaa5, "ata_scsi_slave_config" },
	{ 0xd8b5491c, "ata_scsi_ioctl" },
	{ 0xa3d2c4ac, "ata_scsi_queuecmd" },
	{ 0x81c1d19d, "platform_driver_unregister" },
	{ 0x91ee43e3, "pci_unregister_driver" },
	{ 0xde164253, "__platform_driver_register" },
	{ 0xe776c4a6, "__pci_register_driver" },
	{ 0x678b96ec, "dma_pool_alloc" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x13a4aa08, "sata_link_hardreset" },
	{ 0xcccfb2fa, "sata_deb_timing_hotplug" },
	{ 0x4fdc945d, "sata_deb_timing_normal" },
	{ 0xb95c658e, "ata_sff_queue_pio_task" },
	{ 0xbfb702e, "ata_link_printk" },
	{ 0x7646cee, "ata_tf_to_fis" },
	{ 0xa5ca5d6c, "ata_bmdma_qc_issue" },
	{ 0xa4ff8b07, "ata_port_abort" },
	{ 0x77fb9ccf, "ata_link_offline" },
	{ 0xf1099024, "ata_bmdma_port_intr" },
	{ 0x5e21127, "sata_async_notification" },
	{ 0x553f49d, "sata_scr_write_flush" },
	{ 0xd6f38574, "sata_scr_read" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xd2472081, "ata_link_abort" },
	{ 0x3b356fef, "ata_ehi_push_desc" },
	{ 0x99861dc, "ata_ehi_clear_desc" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0xcc5868f1, "pci_enable_msi" },
	{ 0xc7fc1c45, "pcim_pin_device" },
	{ 0xe92f9158, "pci_try_set_mwi" },
	{ 0xe5eb0c5b, "pci_set_master" },
	{ 0x6448c62b, "pci_read_config_byte" },
	{ 0x97a4cc6, "ata_port_pbar_desc" },
	{ 0x9fb53f68, "dma_set_coherent_mask" },
	{ 0xd6b7d7fc, "dma_set_mask" },
	{ 0xe5831106, "pcim_iomap_table" },
	{ 0x5e83a2c8, "pcim_iomap_regions" },
	{ 0xb72da741, "pcim_enable_device" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xc570ea5f, "_dev_notice" },
	{ 0x11624d34, "ata_host_activate" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2f0bd73a, "of_device_is_compatible" },
	{ 0x933feb8b, "platform_get_irq" },
	{ 0xb27ba97b, "ata_print_version" },
	{ 0x815588a6, "clk_enable" },
	{ 0x255845a8, "phy_power_on" },
	{ 0x7ef8b7bb, "devm_phy_optional_get" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7c9a7371, "clk_prepare" },
	{ 0x18f5ec4c, "clk_get" },
	{ 0xc06d3edc, "devm_ioremap" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xd293157d, "ata_host_alloc_pinfo" },
	{ 0xd6748ca5, "irq_of_parse_and_map" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0x93fde103, "platform_get_resource" },
	{ 0x7e3b7a35, "_dev_alert" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xe559e45e, "ata_qc_complete_multiple" },
	{ 0xfa59cd9c, "ata_qc_get_active" },
	{ 0x649fec74, "ata_sff_dma_pause" },
	{ 0x3d14567a, "ata_sff_softreset" },
	{ 0x78f32fba, "sata_std_hardreset" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x2f7754a8, "dma_pool_free" },
	{ 0x92997ed8, "_printk" },
	{ 0x89e35aab, "dmam_pool_create" },
	{ 0xab5ed0db, "ata_dev_printk" },
	{ 0xb41c9105, "sata_pmp_error_handler" },
	{ 0xe2f29a06, "ata_port_freeze" },
	{ 0xdd6a9407, "ata_eh_analyze_ncq_error" },
	{ 0xdc1a7218, "ata_port_printk" },
	{ 0x87b8798d, "sg_next" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x5d550287, "phy_power_off" },
	{ 0x2e1ca751, "clk_put" },
	{ 0xb077e70a, "clk_unprepare" },
	{ 0xb6e6d99d, "clk_disable" },
	{ 0x7cd10166, "ata_host_detach" },
};

MODULE_INFO(depends, "libata");

MODULE_ALIAS("of:N*T*Cmarvell,armada-370-sata");
MODULE_ALIAS("of:N*T*Cmarvell,armada-370-sataC*");
MODULE_ALIAS("of:N*T*Cmarvell,orion-sata");
MODULE_ALIAS("of:N*T*Cmarvell,orion-sataC*");
MODULE_ALIAS("pci:v000011ABd00005040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00005081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00001720sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00001740sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00001742sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006040sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006041sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006080sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00006081sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000241sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00009005d00000243sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v000011ABd00007042sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002300sv*sd*bc*sc*i*");
MODULE_ALIAS("pci:v00001103d00002310sv*sd*bc*sc*i*");

MODULE_INFO(srcversion, "7ED5C77ECE3ED11A853E11A");
