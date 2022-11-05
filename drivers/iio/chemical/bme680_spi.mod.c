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
	{ 0xadcac529, "driver_unregister" },
	{ 0x70c6196b, "__spi_register_driver" },
	{ 0x54f59995, "spi_write_then_read" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x52829b9d, "spi_sync" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x2b54f526, "bme680_core_probe" },
	{ 0xac28c00e, "__devm_regmap_init" },
	{ 0x46722e55, "bme680_regmap_config" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x62e9350e, "spi_setup" },
	{ 0x9667cc7c, "spi_get_device_id" },
};

MODULE_INFO(depends, "bme680_core");

MODULE_ALIAS("of:N*T*Cbosch,bme680");
MODULE_ALIAS("of:N*T*Cbosch,bme680C*");
MODULE_ALIAS("spi:bme680");

MODULE_INFO(srcversion, "8D186404749577B2417487C");
