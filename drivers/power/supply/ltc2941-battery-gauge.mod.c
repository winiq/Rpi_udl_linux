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
	{ 0xda1a0029, "_dev_warn" },
	{ 0xf176f8cc, "devm_power_supply_register" },
	{ 0x7ce37ff2, "devm_add_action" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0x538ddda2, "of_device_get_match_data" },
	{ 0xf2b157ac, "of_node_get" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xd82eb13c, "power_supply_changed" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x8384871a, "power_supply_get_drvdata" },
	{ 0xc074e4aa, "i2c_smbus_write_i2c_block_data" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x67769b09, "i2c_transfer" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("of:N*T*Clltc,ltc2941");
MODULE_ALIAS("of:N*T*Clltc,ltc2941C*");
MODULE_ALIAS("of:N*T*Clltc,ltc2942");
MODULE_ALIAS("of:N*T*Clltc,ltc2942C*");
MODULE_ALIAS("of:N*T*Clltc,ltc2943");
MODULE_ALIAS("of:N*T*Clltc,ltc2943C*");
MODULE_ALIAS("of:N*T*Clltc,ltc2944");
MODULE_ALIAS("of:N*T*Clltc,ltc2944C*");
MODULE_ALIAS("i2c:ltc2941");
MODULE_ALIAS("i2c:ltc2942");
MODULE_ALIAS("i2c:ltc2943");
MODULE_ALIAS("i2c:ltc2944");

MODULE_INFO(srcversion, "F4A6B636FF8C1406AE5DF3C");
