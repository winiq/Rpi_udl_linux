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
	{ 0xed33f52c, "bus_register" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x3c81c627, "cdev_init" },
	{ 0x55487139, "rc_unregister_device" },
	{ 0xb137a4c8, "debugfs_create_dir" },
	{ 0x5dc00640, "single_open" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x98cf60b3, "strlen" },
	{ 0xc08f6533, "of_parse_phandle" },
	{ 0x828e22f4, "hrtimer_forward" },
	{ 0x416e5db, "single_release" },
	{ 0xe2fc96c9, "seq_puts" },
	{ 0x46a4b118, "hrtimer_cancel" },
	{ 0xcc26711b, "no_llseek" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x4b31b655, "kobject_set_name" },
	{ 0x1d07e365, "memdup_user_nul" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x85df9b6c, "strsep" },
	{ 0x6091b333, "unregister_chrdev_region" },
	{ 0xf47b2831, "debugfs_create_file" },
	{ 0xdd64e639, "strscpy" },
	{ 0xbd19b5, "seq_read" },
	{ 0x8392ac79, "rc_allocate_device" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x25974000, "wait_for_completion" },
	{ 0x3c5d543a, "hrtimer_start_range_ns" },
	{ 0xdcb764ad, "memset" },
	{ 0x2e33c526, "rc_free_device" },
	{ 0x3dad9978, "cancel_delayed_work" },
	{ 0x6e523bbe, "of_find_i2c_device_by_node" },
	{ 0x20463df4, "wait_for_completion_killable" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6f2a887e, "kthread_stop" },
	{ 0xa50a3da7, "_find_next_bit" },
	{ 0xb57e7350, "rc_keydown" },
	{ 0x85a8f9d1, "debugfs_remove" },
	{ 0xfc12fb52, "rc_register_device" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xea9dab3c, "bus_unregister" },
	{ 0x45135ce2, "rc_keyup" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xc6cbbc89, "capable" },
	{ 0x81822a88, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xdda4ba3c, "debugfs_create_devm_seqfile" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8bc6bda8, "cdev_device_add" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xadc9aed4, "get_device" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x2e6432e0, "seq_lseek" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb71589f0, "skip_spaces" },
	{ 0x2d0684a9, "hrtimer_init" },
	{ 0xc0346142, "device_initialize" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xd323ee88, "cdev_device_del" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xa5a47f0b, "of_find_device_by_node" },
	{ 0x20be5d80, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x5bd1724b, "of_node_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe3ec2f2b, "alloc_chrdev_region" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "8C6EDD8AB3B2A63F20F365E");
