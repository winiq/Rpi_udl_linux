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
	{ 0x741facb8, "kobject_put" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x53b954a2, "up_read" },
	{ 0x26c8e661, "tty_unlock" },
	{ 0x21ef374c, "try_wait_for_completion" },
	{ 0xcf91b362, "start_tty" },
	{ 0x349cba85, "strchr" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x98cf60b3, "strlen" },
	{ 0xc5e74216, "release_resource" },
	{ 0x3854774b, "kstrtoll" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x3c6ebed9, "screen_pos" },
	{ 0x3f4542ab, "tty_set_ldisc" },
	{ 0xd9ce30f8, "set_selection_kernel" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x20000329, "simple_strtoul" },
	{ 0x38374815, "clear_selection" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0x96554810, "register_keyboard_notifier" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x55417264, "unregister_vt_notifier" },
	{ 0xd697e69a, "trace_hardirqs_on" },
	{ 0x195226fb, "sysfs_remove_group" },
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x16383ff2, "tty_unregister_ldisc" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0x73cc20f8, "kobject_create_and_add" },
	{ 0x34367133, "vc_cons" },
	{ 0x22b325d5, "kd_mksound" },
	{ 0xc631580a, "console_unlock" },
	{ 0x5dae8ffa, "input_event" },
	{ 0x52bfd181, "param_ops_charp" },
	{ 0xba7b3b54, "misc_register" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xb11d9000, "tty_dev_name_to_number" },
	{ 0xdcb764ad, "memset" },
	{ 0xdbdf6c92, "ioport_resource" },
	{ 0x9ed554b3, "unregister_keyboard_notifier" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x4b0a3f52, "gic_nonsecure_priorities" },
	{ 0x11089ac7, "_ctype" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xfef216eb, "_raw_spin_trylock" },
	{ 0x6f2a887e, "kthread_stop" },
	{ 0x6df8f89f, "sysfs_create_group" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x19c66ed3, "tty_ldisc_flush" },
	{ 0x9166fada, "strncpy" },
	{ 0xfbaaf01e, "console_lock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xb3f548ad, "kmemdup_nul" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x64bbc288, "string_unescape" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x40061ad3, "input_register_device" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0xc5933243, "input_free_device" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0x8a540aeb, "stop_tty" },
	{ 0x60d6f484, "tty_write_room" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x148653, "vsnprintf" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x79de0c3a, "tty_kclose" },
	{ 0xb3f7646e, "kthread_should_stop" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x34fa48c2, "input_unregister_device" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xb71589f0, "skip_spaces" },
	{ 0x4e6e8ea7, "fg_console" },
	{ 0xf33d52d1, "set_user_nice" },
	{ 0x96848186, "scnprintf" },
	{ 0x6a013a12, "tty_kref_put" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xf033e3f3, "inverse_translate" },
	{ 0x608741b5, "__init_swait_queue_head" },
	{ 0xfb38c6e2, "tty_flip_buffer_push" },
	{ 0x5539a689, "tty_kopen_exclusive" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0xca454a34, "vt_get_leds" },
	{ 0xa6257a2f, "complete" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x7303ce54, "tty_register_ldisc" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0x4a3ad70e, "wait_for_completion_timeout" },
	{ 0xec3d2e1b, "trace_hardirqs_off" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xff0fc178, "misc_deregister" },
	{ 0x13110126, "request_resource" },
	{ 0xff667b49, "tty_lock" },
	{ 0xbf041102, "register_vt_notifier" },
	{ 0x8964157d, "tty_set_termios" },
	{ 0xe914e41e, "strcpy" },
	{ 0x14ebdfd0, "paste_selection" },
	{ 0x2e518b1f, "input_allocate_device" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F9AF1F62961917B47825DD9");
