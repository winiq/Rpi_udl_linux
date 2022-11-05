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
	{ 0xd9d2bb03, "snd_usbmidi_disconnect" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x83ef09b3, "snd_pcm_period_elapsed" },
	{ 0x664d79a6, "usb_init_urb" },
	{ 0x3a44f066, "snd_pcm_hw_constraint_msbits" },
	{ 0x273c3eb1, "snd_pcm_stop_xrun" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x65137bf8, "snd_card_disconnect" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x52bfd181, "param_ops_charp" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xb9638db4, "snd_pcm_rate_to_rate_bit" },
	{ 0x4e727df3, "snd_pcm_set_managed_buffer_all" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x27984a03, "snd_pcm_set_ops" },
	{ 0xe02472ef, "usb_set_interface" },
	{ 0x8b0e50a6, "snd_card_free_when_closed" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x6dddfb6d, "usb_driver_claim_interface" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x6f0b8b9e, "usb_free_coherent" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xbf87819c, "__snd_usbmidi_create" },
	{ 0xb6b7c510, "snd_card_new" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1000e51, "schedule" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0x6bfbee5c, "usb_driver_release_interface" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2f4ca2d0, "param_array_ops" },
	{ 0xa13a7a1e, "snd_pcm_hw_constraint_minmax" },
	{ 0x73708729, "usb_register_driver" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x89c97189, "snd_card_free" },
	{ 0xc2a2a05b, "snd_card_register" },
	{ 0xa5288ee4, "usb_ifnum_to_if" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x1b28395f, "snd_pcm_new" },
	{ 0x9d761192, "usb_alloc_coherent" },
	{ 0xb92873bd, "param_ops_uint" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-usbmidi-lib,snd-pcm,snd");

MODULE_ALIAS("usb:v0582p0044d*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p007Dd*dc*dsc*dp*ic*isc*ip*in*");
MODULE_ALIAS("usb:v0582p008Dd*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "777B7BA42B1924D686404EA");
