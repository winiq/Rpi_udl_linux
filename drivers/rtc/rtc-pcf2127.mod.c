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
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x70c6196b, "__spi_register_driver" },
	{ 0x92997ed8, "_printk" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0x9667cc7c, "spi_get_device_id" },
	{ 0xbf0ef43d, "__devm_regmap_init_spi" },
	{ 0xac28c00e, "__devm_regmap_init" },
	{ 0xf9a482f9, "msleep" },
	{ 0x851372a5, "devm_rtc_nvmem_register" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0x97adca0e, "__devm_rtc_register_device" },
	{ 0x32d93cd2, "rtc_add_group" },
	{ 0x4121a11f, "devm_watchdog_register_device" },
	{ 0xdf240d2f, "device_property_present" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x4c2a2c82, "devm_rtc_allocate_device" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x269fdf77, "regmap_update_bits_base" },
	{ 0x9330d080, "rtc_update_irq" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xf93042ef, "regmap_read" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x5d389380, "regmap_bulk_write" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x5838f6c9, "rtc_valid_tm" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0xff56896e, "regmap_bulk_read" },
	{ 0x45a55acd, "regmap_write" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x70127197, "i2c_transfer_buffer_flags" },
};

MODULE_INFO(depends, "regmap-spi");

MODULE_ALIAS("spi:pcf2127");
MODULE_ALIAS("spi:pcf2129");
MODULE_ALIAS("spi:pca2129");
MODULE_ALIAS("i2c:pcf2127");
MODULE_ALIAS("i2c:pcf2129");
MODULE_ALIAS("i2c:pca2129");
MODULE_ALIAS("of:N*T*Cnxp,pcf2127");
MODULE_ALIAS("of:N*T*Cnxp,pcf2127C*");
MODULE_ALIAS("of:N*T*Cnxp,pcf2129");
MODULE_ALIAS("of:N*T*Cnxp,pcf2129C*");
MODULE_ALIAS("of:N*T*Cnxp,pca2129");
MODULE_ALIAS("of:N*T*Cnxp,pca2129C*");

MODULE_INFO(srcversion, "41612378695F447D55951BD");
