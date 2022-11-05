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
	{ 0xf4e83bc, "usb_serial_generic_unthrottle" },
	{ 0x47b0e848, "usb_serial_generic_throttle" },
	{ 0x4acd7187, "usb_serial_deregister_drivers" },
	{ 0x6d12bd23, "usb_serial_register_drivers" },
	{ 0x9828c123, "usb_serial_generic_open" },
	{ 0x15ac1b34, "usb_serial_generic_close" },
	{ 0x65ffeb71, "ezusb_fx1_ihex_firmware_download" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x43e735d6, "usb_bulk_msg" },
	{ 0x67fe2005, "usb_clear_halt" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x37a0cba, "kfree" },
	{ 0x69f849ce, "tty_encode_baud_rate" },
	{ 0x409873e3, "tty_termios_baud_rate" },
	{ 0xf72a65ea, "tty_get_char_size" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
};

MODULE_INFO(depends, "usbserial,ezusb");

MODULE_ALIAS("usb:v0710p8001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0710p0001d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "3154E8079B50D8F6C82715C");
