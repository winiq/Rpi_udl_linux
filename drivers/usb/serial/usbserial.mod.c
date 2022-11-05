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
	{ 0x3bc51a5a, "tty_port_tty_get" },
	{ 0x2d3385d3, "system_wq" },
	{ 0xed33f52c, "bus_register" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xce93cf08, "tty_driver_kref_put" },
	{ 0x26a7300c, "driver_register" },
	{ 0x13d0adf7, "__kfifo_out" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0xe2fc96c9, "seq_puts" },
	{ 0xb34d9035, "tty_port_open" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0x56470118, "__warn_printk" },
	{ 0x583536f8, "tty_port_hangup" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0x84f0547, "tty_register_driver" },
	{ 0xdc0b5074, "usb_autopm_get_interface" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x87c53e09, "__tty_insert_flip_char" },
	{ 0x8d1b97d2, "tty_port_close" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xb341ba23, "device_del" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x75c297d7, "tty_ldisc_deref" },
	{ 0x526eef34, "tty_port_register_device" },
	{ 0xadcac529, "driver_unregister" },
	{ 0x330cbe09, "usb_unpoison_urb" },
	{ 0x4b2c3efc, "usb_poison_urb" },
	{ 0x8b8222b7, "seq_putc" },
	{ 0x6dddfb6d, "usb_driver_claim_interface" },
	{ 0x19421b50, "tty_port_init" },
	{ 0x347fae00, "tty_insert_flip_string_fixed_flag" },
	{ 0x9628d045, "tty_port_destroy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x7fc30ad0, "tty_vhangup" },
	{ 0xd62dd677, "tty_ldisc_ref" },
	{ 0xb8f11603, "idr_alloc" },
	{ 0x753af3ce, "device_add" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xea9dab3c, "bus_unregister" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb3ad4f29, "usb_store_new_id" },
	{ 0x76058bd1, "usb_match_id" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x63fab78d, "tty_port_tty_wakeup" },
	{ 0x6587c97e, "module_put" },
	{ 0xc6cbbc89, "capable" },
	{ 0xc1c1a42a, "tty_unregister_device" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x67b27ec1, "tty_std_termios" },
	{ 0x8452bdbc, "usb_get_dev" },
	{ 0x81822a88, "put_device" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4b9e8b64, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x92997ed8, "_printk" },
	{ 0x6bfbee5c, "usb_driver_release_interface" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xc8864b0d, "usb_get_intf" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x30e74134, "tty_termios_copy_hw" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xb47bd909, "tty_unregister_driver" },
	{ 0x955fcad0, "tty_hangup" },
	{ 0xc17e9946, "usb_show_dynids" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x7abcb737, "tty_standard_install" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x9b4ba46c, "__tty_alloc_driver" },
	{ 0x19a304ba, "usb_disabled" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x54496b4, "schedule_timeout_interruptible" },
	{ 0x37a0cba, "kfree" },
	{ 0xc0346142, "device_initialize" },
	{ 0x1a4bc176, "usb_match_one_id" },
	{ 0x73708729, "usb_register_driver" },
	{ 0x6a013a12, "tty_kref_put" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x740189d8, "driver_attach" },
	{ 0xfb38c6e2, "tty_flip_buffer_push" },
	{ 0xf23fcb99, "__kfifo_in" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x6cae3983, "param_ops_ushort" },
	{ 0x20be5d80, "dev_set_name" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x20978fb9, "idr_find" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x3f9f7d3b, "try_module_get" },
	{ 0xc2469bb6, "usb_autopm_put_interface" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0x1bc37f54, "usb_put_intf" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2098B346F9958408D3913EE");
