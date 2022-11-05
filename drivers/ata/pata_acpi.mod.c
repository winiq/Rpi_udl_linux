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
	{ 0xa777513a, "ata_bmdma_port_ops" },
	{ 0x44ff416b, "ata_pci_remove_one" },
	{ 0xf33e7baf, "ata_common_sdev_attrs" },
	{ 0x3e20f8bd, "ata_scsi_unlock_native_capacity" },
	{ 0xd07c1b38, "ata_std_bios_param" },
	{ 0x6c0943ed, "ata_scsi_dma_need_drain" },
	{ 0x92e0878, "ata_scsi_slave_destroy" },
	{ 0x6aeebaa5, "ata_scsi_slave_config" },
	{ 0xd8b5491c, "ata_scsi_ioctl" },
	{ 0xa3d2c4ac, "ata_scsi_queuecmd" },
	{ 0x91ee43e3, "pci_unregister_driver" },
	{ 0xe776c4a6, "__pci_register_driver" },
	{ 0xa5ca5d6c, "ata_bmdma_qc_issue" },
	{ 0xf536e73e, "ata_acpi_stm" },
	{ 0xd2b10a05, "ata_timing_find_mode" },
	{ 0xc88f69d5, "ata_sff_prereset" },
	{ 0x77432c66, "ata_bmdma_port_start" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xa81e214c, "is_acpi_device_node" },
	{ 0xc055527f, "ata_acpi_gtm_xfermask" },
	{ 0x73c8b8e2, "ata_acpi_gtm" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xc7fc1c45, "pcim_pin_device" },
	{ 0xb72da741, "pcim_enable_device" },
	{ 0xe584b783, "ata_pci_bmdma_init_one" },
};

MODULE_INFO(depends, "libata");

MODULE_ALIAS("pci:v*d*sv*sd*bc01sc01i*");

MODULE_INFO(srcversion, "CE051C1619D7ADD5FC2FA16");
