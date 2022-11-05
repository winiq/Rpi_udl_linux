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
	{ 0xf9a482f9, "msleep" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x83ef09b3, "snd_pcm_period_elapsed" },
	{ 0x664d79a6, "usb_init_urb" },
	{ 0xab6d5b3b, "hex_to_bin" },
	{ 0x273c3eb1, "snd_pcm_stop_xrun" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x892b3647, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x65137bf8, "snd_card_disconnect" },
	{ 0x64611897, "snd_rawmidi_new" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x52bfd181, "param_ops_charp" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x4e727df3, "snd_pcm_set_managed_buffer_all" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x2f94df07, "_snd_ctl_add_follower" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x27984a03, "snd_pcm_set_ops" },
	{ 0xe02472ef, "usb_set_interface" },
	{ 0xac02f514, "snd_ctl_boolean_stereo_info" },
	{ 0x8b0e50a6, "snd_card_free_when_closed" },
	{ 0x4b2c3efc, "usb_poison_urb" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xeaf193c9, "snd_ctl_boolean_mono_info" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xb6b7c510, "snd_card_new" },
	{ 0xcc6a729f, "snd_ctl_enum_info" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x6bb281c1, "snd_ctl_make_virtual_master" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x43e735d6, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0xffaa0890, "snd_ctl_new1" },
	{ 0xd5225981, "usb_interrupt_msg" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x2f4ca2d0, "param_array_ops" },
	{ 0x73708729, "usb_register_driver" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x89c97189, "snd_card_free" },
	{ 0xe5f17584, "usb_control_msg_recv" },
	{ 0xc2a2a05b, "snd_card_register" },
	{ 0x1b28395f, "snd_pcm_new" },
	{ 0x8d0f80af, "snd_ctl_add" },
	{ 0x6aabef6a, "snd_rawmidi_transmit" },
	{ 0x5234a212, "usb_control_msg_send" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0xe41359b6, "snd_rawmidi_receive" },
};

MODULE_INFO(depends, "snd-pcm,snd-rawmidi,snd");

MODULE_ALIAS("usb:v0CCDp0080d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "15C0369C27C11532A06F275");
