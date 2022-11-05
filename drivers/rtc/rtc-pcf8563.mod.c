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
	{ 0x8d318cc7, "i2c_del_driver" },
	{ 0x42bd2ce9, "i2c_register_driver" },
	{ 0x7dbe7b13, "i2c_smbus_read_byte_data" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0x9330d080, "rtc_update_irq" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x67769b09, "i2c_transfer" },
	{ 0xb80bbd8c, "of_clk_add_provider" },
	{ 0xb41610a9, "of_clk_src_simple_get" },
	{ 0xaf4b9ca, "devm_clk_register" },
	{ 0xbcb7079c, "of_property_read_string" },
	{ 0x97adca0e, "__devm_rtc_register_device" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0x4c2a2c82, "devm_rtc_allocate_device" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x70127197, "i2c_transfer_buffer_flags" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cnxp,pcf8563");
MODULE_ALIAS("of:N*T*Cnxp,pcf8563C*");
MODULE_ALIAS("of:N*T*Cepson,rtc8564");
MODULE_ALIAS("of:N*T*Cepson,rtc8564C*");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv8564");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv8564C*");
MODULE_ALIAS("of:N*T*Cnxp,pca8565");
MODULE_ALIAS("of:N*T*Cnxp,pca8565C*");
MODULE_ALIAS("i2c:pcf8563");
MODULE_ALIAS("i2c:rtc8564");
MODULE_ALIAS("i2c:pca8565");

MODULE_INFO(srcversion, "542ED891FFFE62AE2CCA6CA");
