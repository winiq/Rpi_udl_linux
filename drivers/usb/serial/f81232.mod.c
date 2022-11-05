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
	{ 0xd541ae68, "usb_serial_generic_tiocmiwait" },
	{ 0x4acd7187, "usb_serial_deregister_drivers" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x6d12bd23, "usb_serial_register_drivers" },
	{ 0x73708729, "usb_register_driver" },
	{ 0x347fae00, "tty_insert_flip_string_fixed_flag" },
	{ 0xfb38c6e2, "tty_flip_buffer_push" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x9828c123, "usb_serial_generic_open" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0x534131ec, "usb_serial_generic_resume" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x2f2c95c4, "flush_work" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0x15ac1b34, "usb_serial_generic_close" },
	{ 0x69f849ce, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0x6c257ac0, "tty_termios_hw_change" },
	{ 0x6a013a12, "tty_kref_put" },
	{ 0x81866258, "usb_serial_handle_dcd_change" },
	{ 0x3bc51a5a, "tty_port_tty_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x37a0cba, "kfree" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x87c53e09, "__tty_insert_flip_char" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x2d3385d3, "system_wq" },
};

MODULE_INFO(depends, "usbserial");

MODULE_ALIAS("usb:v1934p0706d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1602d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1604d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1605d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1606d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1608d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1632d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1634d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1635d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p1636d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v2C42p16F8d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "5F5DCFC43464992DE6F544F");
