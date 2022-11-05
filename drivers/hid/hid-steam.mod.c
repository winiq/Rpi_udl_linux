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
	{ 0x4466f39, "param_get_bool" },
	{ 0x719251e9, "hid_unregister_driver" },
	{ 0xf9ce2f6b, "__hid_register_driver" },
	{ 0xcc1fe040, "hid_hw_open" },
	{ 0x6597f682, "hid_add_device" },
	{ 0xc577beb3, "hid_hw_start" },
	{ 0xcb5b8698, "hid_allocate_device" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xda39556f, "hid_open_report" },
	{ 0xf7131c54, "power_supply_powers" },
	{ 0xd4d29c71, "power_supply_register" },
	{ 0xec7a6102, "devm_kasprintf" },
	{ 0x5792f848, "strlcpy" },
	{ 0x28343fb6, "hid_hw_stop" },
	{ 0x2b27adba, "hid_hw_close" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x97115630, "hid_destroy_device" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x34fa48c2, "input_unregister_device" },
	{ 0x9b4bdc4e, "power_supply_unregister" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xd82eb13c, "power_supply_changed" },
	{ 0x2321f01c, "hid_input_report" },
	{ 0x5dae8ffa, "input_event" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xfff00a57, "param_set_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0xf9a482f9, "msleep" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe78eea12, "hid_alloc_report_buf" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x8384871a, "power_supply_get_drvdata" },
	{ 0x92997ed8, "_printk" },
	{ 0xc5933243, "input_free_device" },
	{ 0x40061ad3, "input_register_device" },
	{ 0xed5ea3d, "input_alloc_absinfo" },
	{ 0x74dd3474, "input_set_abs_params" },
	{ 0xf0d251f7, "input_set_capability" },
	{ 0x2e518b1f, "input_allocate_device" },
	{ 0x5495392, "hid_debug" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x836b530a, "hid_parse_report" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("hid:b0003g*v000028DEp00001102");
MODULE_ALIAS("hid:b0003g*v000028DEp00001142");

MODULE_INFO(srcversion, "554EE9374A82B039346207E");
