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
	{ 0x538ddda2, "of_device_get_match_data" },
	{ 0x70c6196b, "__spi_register_driver" },
	{ 0xd8bc9330, "spi_sync_locked" },
	{ 0x70db54da, "tpm_tis_core_init" },
	{ 0xadcac529, "driver_unregister" },
	{ 0x78403d94, "tpm_tis_remove" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x79adf39d, "tpm_chip_unregister" },
	{ 0xbf435ad9, "spi_bus_lock" },
	{ 0x4829a47e, "memcpy" },
	{ 0x9667cc7c, "spi_get_device_id" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x4ba84367, "spi_bus_unlock" },
};

MODULE_INFO(depends, "tpm_tis_core,tpm");

MODULE_ALIAS("acpi*:SMO0768:*");
MODULE_ALIAS("spi:st33htpm-spi");
MODULE_ALIAS("spi:slb9670");
MODULE_ALIAS("spi:tpm_tis_spi");
MODULE_ALIAS("spi:tpm_tis-spi");
MODULE_ALIAS("spi:cr50");
MODULE_ALIAS("of:N*T*Cst,st33htpm-spi");
MODULE_ALIAS("of:N*T*Cst,st33htpm-spiC*");
MODULE_ALIAS("of:N*T*Cinfineon,slb9670");
MODULE_ALIAS("of:N*T*Cinfineon,slb9670C*");
MODULE_ALIAS("of:N*T*Ctcg,tpm_tis-spi");
MODULE_ALIAS("of:N*T*Ctcg,tpm_tis-spiC*");
MODULE_ALIAS("of:N*T*Cgoogle,cr50");
MODULE_ALIAS("of:N*T*Cgoogle,cr50C*");

MODULE_INFO(srcversion, "2D2B255550F1B20EF65A78B");
