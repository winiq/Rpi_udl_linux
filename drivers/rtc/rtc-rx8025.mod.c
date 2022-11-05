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
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x40ef4d51, "device_create_file" },
	{ 0x38e377f1, "devm_rtc_device_register" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x7a2d3100, "i2c_smbus_read_i2c_block_data" },
	{ 0x356461c8, "rtc_time64_to_tm" },
	{ 0x4f2250ba, "rtc_tm_to_time64" },
	{ 0xc074e4aa, "i2c_smbus_write_i2c_block_data" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x9330d080, "rtc_update_irq" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7dbe7b13, "i2c_smbus_read_byte_data" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x2733b16f, "i2c_smbus_write_byte_data" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0xba1aa9c7, "device_remove_file" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("i2c:rx8025");
MODULE_ALIAS("i2c:rx8035");

MODULE_INFO(srcversion, "203F7D7C9856B14DF48AA65");
