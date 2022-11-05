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
	{ 0x6f999b09, "bmp280_dev_pm_ops" },
	{ 0xadcac529, "driver_unregister" },
	{ 0x70c6196b, "__spi_register_driver" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xf31ed77e, "bmp280_common_probe" },
	{ 0xac28c00e, "__devm_regmap_init" },
	{ 0x24657cb3, "bmp280_regmap_config" },
	{ 0xcee3a1d1, "bmp180_regmap_config" },
	{ 0x62e9350e, "spi_setup" },
	{ 0x9667cc7c, "spi_get_device_id" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x54f59995, "spi_write_then_read" },
};

MODULE_INFO(depends, "bmp280");

MODULE_ALIAS("spi:bmp180");
MODULE_ALIAS("spi:bmp181");
MODULE_ALIAS("spi:bmp280");
MODULE_ALIAS("spi:bme280");
MODULE_ALIAS("of:N*T*Cbosch,bmp085");
MODULE_ALIAS("of:N*T*Cbosch,bmp085C*");
MODULE_ALIAS("of:N*T*Cbosch,bmp180");
MODULE_ALIAS("of:N*T*Cbosch,bmp180C*");
MODULE_ALIAS("of:N*T*Cbosch,bmp181");
MODULE_ALIAS("of:N*T*Cbosch,bmp181C*");
MODULE_ALIAS("of:N*T*Cbosch,bmp280");
MODULE_ALIAS("of:N*T*Cbosch,bmp280C*");
MODULE_ALIAS("of:N*T*Cbosch,bme280");
MODULE_ALIAS("of:N*T*Cbosch,bme280C*");

MODULE_INFO(srcversion, "5FD85236BEBAFABD5FBCC1E");
