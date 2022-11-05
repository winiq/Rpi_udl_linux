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
	{ 0x506ab3a9, "usb_ep_queue" },
	{ 0xd1a10ff2, "g_audio_cleanup" },
	{ 0x33511518, "u_audio_start_capture" },
	{ 0xe0419ac4, "kstrtos16" },
	{ 0xd5f88e59, "u_audio_get_volume" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa8c3b4b, "usb_ep_set_halt" },
	{ 0xa9e74462, "usb_ep_alloc_request" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x93bd6ea7, "usb_function_unregister" },
	{ 0x124bad4d, "kstrtobool" },
	{ 0x3533e9bf, "usb_put_function_instance" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0x6e93807c, "usb_ep_autoconfig" },
	{ 0x5a921311, "strncmp" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x94a2018c, "config_group_init_type_name" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x8120db37, "g_audio_setup" },
	{ 0xfdfc3547, "usb_function_register" },
	{ 0x9e23c516, "u_audio_stop_playback" },
	{ 0xfd07cb1c, "u_audio_stop_capture" },
	{ 0xe5484995, "u_audio_get_mute" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x8db4107e, "config_ep_by_speed" },
	{ 0x1b12bfb, "usb_ep_free_request" },
	{ 0x998057d1, "u_audio_start_playback" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x7c99c878, "u_audio_set_volume" },
	{ 0x37a0cba, "kfree" },
	{ 0x3b6c41ea, "kstrtouint" },
	{ 0x4829a47e, "memcpy" },
	{ 0x5aac2427, "u_audio_set_mute" },
	{ 0x6ba77cc9, "usb_assign_descriptors" },
	{ 0xfe783c2d, "usb_interface_id" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "libcomposite,u_audio");


MODULE_INFO(srcversion, "1071009C1E43E1962CBB3E7");
