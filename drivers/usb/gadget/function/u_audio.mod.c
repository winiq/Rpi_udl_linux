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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x9eb52803, "usb_ep_disable" },
	{ 0xaf201fa6, "usb_ep_enable" },
	{ 0x83ef09b3, "snd_pcm_period_elapsed" },
	{ 0x506ab3a9, "usb_ep_queue" },
	{ 0xcb1ea16, "snd_pcm_stream_lock" },
	{ 0xdd64e639, "strscpy" },
	{ 0xa9e74462, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xd56699f0, "snd_pcm_hw_constraint_integer" },
	{ 0xdcb764ad, "memset" },
	{ 0x4e727df3, "snd_pcm_set_managed_buffer_all" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x27984a03, "snd_pcm_set_ops" },
	{ 0xdd0f4668, "snd_ctl_notify" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xb6b7c510, "snd_card_new" },
	{ 0x882077d5, "usb_ep_dequeue" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x5407bc14, "snd_pcm_stream_unlock" },
	{ 0xffaa0890, "snd_ctl_new1" },
	{ 0x8db4107e, "config_ep_by_speed" },
	{ 0x1b12bfb, "usb_ep_free_request" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x89c97189, "snd_card_free" },
	{ 0xc2a2a05b, "snd_card_register" },
	{ 0x1b28395f, "snd_pcm_new" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x8d0f80af, "snd_ctl_add" },
};

MODULE_INFO(depends, "snd-pcm,snd,libcomposite");


MODULE_INFO(srcversion, "478AE9BE75F7B372E33F52B");
