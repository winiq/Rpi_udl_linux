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
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x407af304, "usb_wait_anchor_empty_timeout" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x83ef09b3, "snd_pcm_period_elapsed" },
	{ 0x664d79a6, "usb_init_urb" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xdd64e639, "strscpy" },
	{ 0x65137bf8, "snd_card_disconnect" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x52bfd181, "param_ops_charp" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xdcb764ad, "memset" },
	{ 0x4e727df3, "snd_pcm_set_managed_buffer_all" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xfac8d605, "snd_pcm_hw_constraint_list" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x27984a03, "snd_pcm_set_ops" },
	{ 0xe02472ef, "usb_set_interface" },
	{ 0x8b0e50a6, "snd_card_free_when_closed" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xce49d0a4, "usb_urb_ep_type_check" },
	{ 0xb6b7c510, "snd_card_new" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x2f4ca2d0, "param_array_ops" },
	{ 0x73708729, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x89c97189, "snd_card_free" },
	{ 0xc2a2a05b, "snd_card_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1b28395f, "snd_pcm_new" },
	{ 0x5234a212, "usb_control_msg_send" },
	{ 0x2f5da2fc, "usb_anchor_urb" },
};

MODULE_INFO(depends, "snd-pcm,snd");

MODULE_ALIAS("usb:v04B4p0384d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p930Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p931Bd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p931Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p931Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p931Ed*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p931Fd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p9320d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v04B4p9321d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v249Cp9001d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v249Cp9002d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v249Cp9006d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v249Cp9008d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v249Cp931Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v249Cp932Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v245Fp931Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v25C6p9002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "32476315F9342C775831C9C");
