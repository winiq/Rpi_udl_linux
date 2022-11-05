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
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7846af3e, "__kfifo_len_r" },
	{ 0x83ef09b3, "snd_pcm_period_elapsed" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0x2484adc3, "__kfifo_to_user_r" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x892b3647, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x7d6cfef9, "usb_unlink_urb" },
	{ 0x65137bf8, "snd_card_disconnect" },
	{ 0x64611897, "snd_rawmidi_new" },
	{ 0xc6cb465a, "__kfifo_max_r" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xdcb764ad, "memset" },
	{ 0x4e727df3, "snd_pcm_set_managed_buffer_all" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x27984a03, "snd_pcm_set_ops" },
	{ 0xe02472ef, "usb_set_interface" },
	{ 0x8b0e50a6, "snd_card_free_when_closed" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x1a038d3f, "snd_rawmidi_transmit_peek" },
	{ 0x57e3dfff, "snd_hwdep_new" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0xce49d0a4, "usb_urb_ep_type_check" },
	{ 0xb6b7c510, "snd_card_new" },
	{ 0xe0f51e2b, "snd_pcm_hw_constraint_ratdens" },
	{ 0xae102ed8, "_dev_info" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x8452bdbc, "usb_get_dev" },
	{ 0x8ef9a053, "snd_rawmidi_transmit_ack" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x43e735d6, "usb_bulk_msg" },
	{ 0x4b9e8b64, "usb_put_dev" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0xffaa0890, "snd_ctl_new1" },
	{ 0x3955fcf6, "__kfifo_in_r" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0xd5225981, "usb_interrupt_msg" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x7b37d4a7, "_find_first_zero_bit" },
	{ 0x92540fbf, "finish_wait" },
	{ 0xe5f17584, "usb_control_msg_recv" },
	{ 0x9291cd3b, "memdup_user" },
	{ 0x1b28395f, "snd_pcm_new" },
	{ 0x8d0f80af, "snd_ctl_add" },
	{ 0x5234a212, "usb_control_msg_send" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0xe41359b6, "snd_rawmidi_receive" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "snd-pcm,snd-rawmidi,snd,snd-hwdep");


MODULE_INFO(srcversion, "F446BB9376AE97EF6272ED9");
