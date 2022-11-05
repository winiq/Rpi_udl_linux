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
	{ 0xeb233a45, "__kmalloc" },
	{ 0x35c8f250, "usb_gstrings_attach" },
	{ 0xd6099f7a, "usb_free_all_descriptors" },
	{ 0x9eb52803, "usb_ep_disable" },
	{ 0xaf201fa6, "usb_ep_enable" },
	{ 0x139f2189, "__kfifo_alloc" },
	{ 0x506ab3a9, "usb_ep_queue" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa8c3b4b, "usb_ep_set_halt" },
	{ 0x892b3647, "snd_rawmidi_set_ops" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x93bd6ea7, "usb_function_unregister" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x64611897, "snd_rawmidi_new" },
	{ 0xc80ea389, "snd_device_new" },
	{ 0x3533e9bf, "usb_put_function_instance" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6e93807c, "usb_ep_autoconfig" },
	{ 0x8b0e50a6, "snd_card_free_when_closed" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x94a2018c, "config_group_init_type_name" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xfdfc3547, "usb_function_register" },
	{ 0x9eacf8a5, "kstrndup" },
	{ 0xb6b7c510, "snd_card_new" },
	{ 0x215aed1, "snd_component_add" },
	{ 0xb775db55, "alloc_ep_req" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x8db4107e, "config_ep_by_speed" },
	{ 0x1b12bfb, "usb_ep_free_request" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0xdb760f52, "__kfifo_free" },
	{ 0xcd91b127, "system_highpri_wq" },
	{ 0x2e09263f, "usb_copy_descriptors" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0xfd1a24e2, "snd_rawmidi_drop_output" },
	{ 0xfe783c2d, "usb_interface_id" },
	{ 0x89c97189, "snd_card_free" },
	{ 0xc2a2a05b, "snd_card_register" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x6aabef6a, "snd_rawmidi_transmit" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xe41359b6, "snd_rawmidi_receive" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "libcomposite,snd-rawmidi,snd");


MODULE_INFO(srcversion, "C960D5A5EA5063FD9774C99");
