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
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0xb92873bd, "param_ops_uint" },
	{ 0x9bbbdfa1, "w1_unregister_family" },
	{ 0x58afe81b, "w1_register_family" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xd4d29c71, "power_supply_register" },
	{ 0x39e0287c, "of_property_read_variable_u32_array" },
	{ 0xe536ac87, "of_find_property" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xc570ea5f, "_dev_notice" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0xac731ea7, "power_supply_am_i_supplied" },
	{ 0xd82eb13c, "power_supply_changed" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xf74bb274, "mod_delayed_work_on" },
	{ 0x8384871a, "power_supply_get_drvdata" },
	{ 0x9b4bdc4e, "power_supply_unregister" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x5687a2ab, "w1_write_block" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x14908ae1, "w1_read_block" },
	{ 0xa3718e02, "w1_write_8" },
	{ 0xc72a424e, "w1_reset_select_slave" },
	{ 0x4dfa8d4b, "mutex_lock" },
};

MODULE_INFO(depends, "wire");


MODULE_INFO(srcversion, "10D41588D583C35DD8B738E");
