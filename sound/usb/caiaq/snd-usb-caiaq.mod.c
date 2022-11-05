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
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x83ef09b3, "snd_pcm_period_elapsed" },
	{ 0x664d79a6, "usb_init_urb" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0x892b3647, "snd_rawmidi_set_ops" },
	{ 0xdd64e639, "strscpy" },
	{ 0x65137bf8, "snd_card_disconnect" },
	{ 0x64611897, "snd_rawmidi_new" },
	{ 0x74dd3474, "input_set_abs_params" },
	{ 0x5dae8ffa, "input_event" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x52bfd181, "param_ops_charp" },
	{ 0xf9c0b663, "strlcat" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x4e727df3, "snd_pcm_set_managed_buffer_all" },
	{ 0xdcbcc479, "usb_string" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x27984a03, "snd_pcm_set_ops" },
	{ 0xe02472ef, "usb_set_interface" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x1da33521, "snd_card_set_id" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xce49d0a4, "usb_urb_ep_type_check" },
	{ 0xb6b7c510, "snd_card_new" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x36a08a19, "usb_reset_device" },
	{ 0x40061ad3, "input_register_device" },
	{ 0x43e735d6, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xffaa0890, "snd_ctl_new1" },
	{ 0xc5933243, "input_free_device" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x34fa48c2, "input_unregister_device" },
	{ 0x2f4ca2d0, "param_array_ops" },
	{ 0x73708729, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x89c97189, "snd_card_free" },
	{ 0xc2a2a05b, "snd_card_register" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1b28395f, "snd_pcm_new" },
	{ 0x8d0f80af, "snd_ctl_add" },
	{ 0x6aabef6a, "snd_rawmidi_transmit" },
	{ 0x69255f54, "snd_pcm_hw_limit_rates" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0xe41359b6, "snd_rawmidi_receive" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0x2e518b1f, "input_allocate_device" },
};

MODULE_INFO(depends, "snd-pcm,snd-rawmidi,snd");

MODULE_ALIAS("usb:v17CCp1969d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1940d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp4711d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp4712d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0815d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1978d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp1915d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0D8Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0839d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp041Cd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp2305d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCpBAFFd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp041Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v17CCp0808d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "EE8281B1188909090955AC4");
