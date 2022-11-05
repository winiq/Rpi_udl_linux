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
	{ 0xf11474e5, "usb_serial_generic_get_icount" },
	{ 0xd541ae68, "usb_serial_generic_tiocmiwait" },
	{ 0x4acd7187, "usb_serial_deregister_drivers" },
	{ 0x6d12bd23, "usb_serial_register_drivers" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xdcbcc479, "usb_string" },
	{ 0x6a013a12, "tty_kref_put" },
	{ 0x3bc51a5a, "tty_port_tty_get" },
	{ 0x69f849ce, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x63fab78d, "tty_port_tty_wakeup" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x4829a47e, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xfb38c6e2, "tty_flip_buffer_push" },
	{ 0x347fae00, "tty_insert_flip_string_fixed_flag" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v1608p0001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0003d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0004d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p1403d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0005d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0007d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p000Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p000Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p000Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p000Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0010d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0011d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0012d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p001Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0019d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0013d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0014d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v1608p0018d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0404p0202d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0404p0203d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0404p0310d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0404p0311d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0404p0312d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D9pA758d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D9pA794d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v05D9pA225d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "9E7CB15268C4E9247C0301A");
