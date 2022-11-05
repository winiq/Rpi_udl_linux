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
	{ 0x2d3385d3, "system_wq" },
	{ 0xba1aa9c7, "device_remove_file" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x25901b77, "generic_file_llseek" },
	{ 0xda39556f, "hid_open_report" },
	{ 0x5dc00640, "single_open" },
	{ 0x98cf60b3, "strlen" },
	{ 0x4492ff0e, "input_ff_create_memless" },
	{ 0x416e5db, "single_release" },
	{ 0x9b4bdc4e, "power_supply_unregister" },
	{ 0x3e8e0bc0, "kobject_uevent" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0xf7131c54, "power_supply_powers" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf47b2831, "debugfs_create_file" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xbd19b5, "seq_read" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x74dd3474, "input_set_abs_params" },
	{ 0x5dae8ffa, "input_event" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x8384871a, "power_supply_get_drvdata" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x966957d4, "led_classdev_register_ext" },
	{ 0xbcab6ee6, "sscanf" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x2b27adba, "hid_hw_close" },
	{ 0xaafdc258, "strcasecmp" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x5a921311, "strncmp" },
	{ 0x85a8f9d1, "debugfs_remove" },
	{ 0xcc1fe040, "hid_hw_open" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x1de95874, "simple_open" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x40ef4d51, "device_create_file" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xa916b694, "strnlen" },
	{ 0x81822a88, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x40061ad3, "input_register_device" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xc5933243, "input_free_device" },
	{ 0xf02aa937, "wait_for_completion_interruptible_timeout" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x28343fb6, "hid_hw_stop" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xadc9aed4, "get_device" },
	{ 0xfaf784d, "led_classdev_unregister" },
	{ 0x2e6432e0, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x34fa48c2, "input_unregister_device" },
	{ 0xf9ce2f6b, "__hid_register_driver" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xc577beb3, "hid_hw_start" },
	{ 0xd4d29c71, "power_supply_register" },
	{ 0x719251e9, "hid_unregister_driver" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x2e518b1f, "input_allocate_device" },
};

MODULE_INFO(depends, "ff-memless");

MODULE_ALIAS("hid:b0005g*v0000057Ep00000306");
MODULE_ALIAS("hid:b0005g*v0000057Ep00000330");

MODULE_INFO(srcversion, "7191DA90E759CB253160F0F");
