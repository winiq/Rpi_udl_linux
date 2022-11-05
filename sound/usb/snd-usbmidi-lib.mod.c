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
	{ 0xd4b7fdd2, "snd_rawmidi_proceed" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x53b954a2, "up_read" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xad73041f, "autoremove_wake_function" },
	{ 0x3c12dfe, "cancel_work_sync" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x892b3647, "snd_rawmidi_set_ops" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x64611897, "snd_rawmidi_new" },
	{ 0x668b19a1, "down_read" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0xdcbcc479, "usb_string" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe02472ef, "usb_set_interface" },
	{ 0xdd0f4668, "snd_ctl_notify" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0x4b750f53, "_raw_spin_unlock_irq" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x1a038d3f, "snd_rawmidi_transmit_peek" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x6f0b8b9e, "usb_free_coherent" },
	{ 0xce807a25, "up_write" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x57bc19d2, "down_write" },
	{ 0xce49d0a4, "usb_urb_ep_type_check" },
	{ 0xcc6a729f, "snd_ctl_enum_info" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x8ef9a053, "snd_rawmidi_transmit_ack" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x43e735d6, "usb_bulk_msg" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x8427cc7b, "_raw_spin_lock_irq" },
	{ 0xffaa0890, "snd_ctl_new1" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xd1f66e2e, "usb_autopm_get_interface_no_resume" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xd5fd90f1, "prepare_to_wait" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x9d761192, "usb_alloc_coherent" },
	{ 0x8d0f80af, "snd_ctl_add" },
	{ 0x57674fd7, "__sw_hweight16" },
	{ 0x6aabef6a, "snd_rawmidi_transmit" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0xe41359b6, "snd_rawmidi_receive" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-rawmidi,snd");


MODULE_INFO(srcversion, "A6C12BBB8327C3ADB46F338");
