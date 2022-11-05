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
	{ 0x97adca0e, "__devm_rtc_register_device" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x32d93cd2, "rtc_add_group" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0x4121a11f, "devm_watchdog_register_device" },
	{ 0x4c2a2c82, "devm_rtc_allocate_device" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xbcb7079c, "of_property_read_string" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xb6936ffe, "_bcd2bin" },
	{ 0x7a2d3100, "i2c_smbus_read_i2c_block_data" },
	{ 0xc074e4aa, "i2c_smbus_write_i2c_block_data" },
	{ 0x80ca5026, "_bin2bcd" },
	{ 0x7e3b7a35, "_dev_alert" },
	{ 0x9330d080, "rtc_update_irq" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x5c3c7387, "kstrtoull" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x5a921311, "strncmp" },
	{ 0x2733b16f, "i2c_smbus_write_byte_data" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x7dbe7b13, "i2c_smbus_read_byte_data" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cabracon,abx80x");
MODULE_ALIAS("of:N*T*Cabracon,abx80xC*");
MODULE_ALIAS("of:N*T*Cabracon,ab0801");
MODULE_ALIAS("of:N*T*Cabracon,ab0801C*");
MODULE_ALIAS("of:N*T*Cabracon,ab0803");
MODULE_ALIAS("of:N*T*Cabracon,ab0803C*");
MODULE_ALIAS("of:N*T*Cabracon,ab0804");
MODULE_ALIAS("of:N*T*Cabracon,ab0804C*");
MODULE_ALIAS("of:N*T*Cabracon,ab0805");
MODULE_ALIAS("of:N*T*Cabracon,ab0805C*");
MODULE_ALIAS("of:N*T*Cabracon,ab1801");
MODULE_ALIAS("of:N*T*Cabracon,ab1801C*");
MODULE_ALIAS("of:N*T*Cabracon,ab1803");
MODULE_ALIAS("of:N*T*Cabracon,ab1803C*");
MODULE_ALIAS("of:N*T*Cabracon,ab1804");
MODULE_ALIAS("of:N*T*Cabracon,ab1804C*");
MODULE_ALIAS("of:N*T*Cabracon,ab1805");
MODULE_ALIAS("of:N*T*Cabracon,ab1805C*");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv1805");
MODULE_ALIAS("of:N*T*Cmicrocrystal,rv1805C*");
MODULE_ALIAS("i2c:abx80x");
MODULE_ALIAS("i2c:ab0801");
MODULE_ALIAS("i2c:ab0803");
MODULE_ALIAS("i2c:ab0804");
MODULE_ALIAS("i2c:ab0805");
MODULE_ALIAS("i2c:ab1801");
MODULE_ALIAS("i2c:ab1803");
MODULE_ALIAS("i2c:ab1804");
MODULE_ALIAS("i2c:ab1805");
MODULE_ALIAS("i2c:rv1805");

MODULE_INFO(srcversion, "94971A01EEFC0AA3C6FE334");
