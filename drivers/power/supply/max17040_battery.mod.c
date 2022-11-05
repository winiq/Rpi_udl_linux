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
	{ 0xa6c96402, "_dev_err" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0x7ce37ff2, "devm_add_action" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xf176f8cc, "devm_power_supply_register" },
	{ 0x49c4e465, "device_property_read_u8_array" },
	{ 0x12350178, "device_property_read_u32_array" },
	{ 0xdf240d2f, "device_property_present" },
	{ 0x538ddda2, "of_device_get_match_data" },
	{ 0x7e4cec81, "__devm_regmap_init_i2c" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x45a55acd, "regmap_write" },
	{ 0x269fdf77, "regmap_update_bits_base" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0xd82eb13c, "power_supply_changed" },
	{ 0x8384871a, "power_supply_get_drvdata" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xf93042ef, "regmap_read" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Cmaxim,max17040");
MODULE_ALIAS("of:N*T*Cmaxim,max17040C*");
MODULE_ALIAS("of:N*T*Cmaxim,max17041");
MODULE_ALIAS("of:N*T*Cmaxim,max17041C*");
MODULE_ALIAS("of:N*T*Cmaxim,max17043");
MODULE_ALIAS("of:N*T*Cmaxim,max17043C*");
MODULE_ALIAS("of:N*T*Cmaxim,max77836-battery");
MODULE_ALIAS("of:N*T*Cmaxim,max77836-batteryC*");
MODULE_ALIAS("of:N*T*Cmaxim,max17044");
MODULE_ALIAS("of:N*T*Cmaxim,max17044C*");
MODULE_ALIAS("of:N*T*Cmaxim,max17048");
MODULE_ALIAS("of:N*T*Cmaxim,max17048C*");
MODULE_ALIAS("of:N*T*Cmaxim,max17049");
MODULE_ALIAS("of:N*T*Cmaxim,max17049C*");
MODULE_ALIAS("of:N*T*Cmaxim,max17058");
MODULE_ALIAS("of:N*T*Cmaxim,max17058C*");
MODULE_ALIAS("of:N*T*Cmaxim,max17059");
MODULE_ALIAS("of:N*T*Cmaxim,max17059C*");
MODULE_ALIAS("i2c:max17040");
MODULE_ALIAS("i2c:max17041");
MODULE_ALIAS("i2c:max17043");
MODULE_ALIAS("i2c:max77836-battery");
MODULE_ALIAS("i2c:max17044");
MODULE_ALIAS("i2c:max17048");
MODULE_ALIAS("i2c:max17049");
MODULE_ALIAS("i2c:max17058");
MODULE_ALIAS("i2c:max17059");

MODULE_INFO(srcversion, "18B86EF7854A0174C8BFEA6");
