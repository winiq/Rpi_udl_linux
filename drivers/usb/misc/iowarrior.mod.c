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
	{ 0x95cc0f6b, "noop_llseek" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x73708729, "usb_register_driver" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x7e009d2, "usb_unanchor_urb" },
	{ 0x2f5da2fc, "usb_anchor_urb" },
	{ 0x9d761192, "usb_alloc_coherent" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xdcb764ad, "memset" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6f0b8b9e, "usb_free_coherent" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x45435574, "usb_deregister_dev" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x1bc37f54, "usb_put_intf" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0x9a177bfc, "usb_register_dev" },
	{ 0x98cf60b3, "strlen" },
	{ 0xdcbcc479, "usb_string" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0x1e9c590a, "usb_find_common_endpoints_reverse" },
	{ 0xc8864b0d, "usb_get_intf" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x4829a47e, "memcpy" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0x56470118, "__warn_printk" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x92997ed8, "_printk" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x533ca3f8, "usb_find_interface" },
};

MODULE_INFO(depends, "");

MODULE_ALIAS("usb:v07C0p1500d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1501d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1511d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1512d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1503d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p158Ad*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p158Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1504d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1505d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v07C0p1506d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "A3EE7C68326B7470886BDE6");
