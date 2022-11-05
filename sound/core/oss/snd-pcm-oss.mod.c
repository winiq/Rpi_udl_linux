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
	{ 0xe56a9336, "snd_pcm_format_width" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x24a94b26, "snd_info_get_line" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x5e7f4920, "snd_pcm_format_set_silence" },
	{ 0xc39b86f4, "snd_card_file_remove" },
	{ 0x504e47b7, "snd_pcm_release_substream" },
	{ 0x3846603a, "snd_pcm_notify" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xcc26711b, "no_llseek" },
	{ 0x4f816e9b, "snd_pcm_format_big_endian" },
	{ 0x89e1a87e, "snd_info_create_card_entry" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x20000329, "simple_strtoul" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0xa4867994, "snd_pcm_hw_refine" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x198788b4, "snd_lookup_oss_minor_data" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0x2d39b0a7, "kstrdup" },
	{ 0x64522be7, "nonseekable_open" },
	{ 0xbb9ed3bf, "mutex_trylock" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x1d027e4b, "snd_pcm_format_signed" },
	{ 0xaad8c7d6, "default_wake_function" },
	{ 0x52e3e4a5, "snd_pcm_hw_param_value" },
	{ 0xdcb764ad, "memset" },
	{ 0x89940875, "mutex_lock_interruptible" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe1084199, "snd_pcm_hw_param_last" },
	{ 0x8df3789f, "snd_oss_info_register" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x9f289a72, "snd_pcm_mmap_data" },
	{ 0x6ef8fcd8, "snd_pcm_format_linear" },
	{ 0xa6c96402, "_dev_err" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x6587c97e, "module_put" },
	{ 0x89b322be, "snd_card_file_add" },
	{ 0x81822a88, "put_device" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x4abcd69a, "snd_pcm_stream_lock_irq" },
	{ 0x1000e51, "schedule" },
	{ 0x8ddd8aad, "schedule_timeout" },
	{ 0x5fab9ceb, "snd_pcm_stream_unlock_irq" },
	{ 0x92997ed8, "_printk" },
	{ 0xc283bcaa, "snd_register_oss_device" },
	{ 0xb95b10b6, "snd_pcm_open_substream" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x650f8603, "snd_pcm_format_silence_64" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc6d45488, "snd_unregister_oss_device" },
	{ 0x3796bdcc, "snd_pcm_format_little_endian" },
	{ 0x492bf63a, "__snd_pcm_lib_xfer" },
	{ 0x68a24153, "snd_pcm_format_physical_width" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x4cda566, "snd_interval_refine" },
	{ 0x9e6d79f8, "snd_info_get_str" },
	{ 0x37a0cba, "kfree" },
	{ 0x283dfe3, "_snd_pcm_hw_params_any" },
	{ 0x4829a47e, "memcpy" },
	{ 0xa61aa028, "snd_pcm_format_unsigned" },
	{ 0x9a2e62da, "snd_info_free_entry" },
	{ 0x2f4ca2d0, "param_array_ops" },
	{ 0xa9ee282, "snd_pcm_kernel_ioctl" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x9770d1d5, "snd_info_register" },
	{ 0x8f787b5f, "snd_pcm_hw_param_first" },
	{ 0x3f9f7d3b, "try_module_get" },
};

MODULE_INFO(depends, "snd-pcm,snd");


MODULE_INFO(srcversion, "96DD880D6A1DE4E62D41BC1");
