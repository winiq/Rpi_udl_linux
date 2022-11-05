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
	{ 0x2f2c95c4, "flush_work" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x619cb7dd, "simple_read_from_buffer" },
	{ 0xb137a4c8, "debugfs_create_dir" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0x98cf60b3, "strlen" },
	{ 0xb973e18e, "regmap_raw_write" },
	{ 0x3153e77b, "regmap_multi_reg_write" },
	{ 0x269fdf77, "regmap_update_bits_base" },
	{ 0xd4c14632, "system_unbound_wq" },
	{ 0xd48b5234, "snd_soc_bytes_tlv_callback" },
	{ 0x7809c8fa, "snd_soc_component_disable_pin" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x56470118, "__warn_printk" },
	{ 0xff56896e, "regmap_bulk_read" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xf6dc30f2, "debugfs_create_x32" },
	{ 0xf93042ef, "regmap_read" },
	{ 0x999e8297, "vfree" },
	{ 0xf47b2831, "debugfs_create_file" },
	{ 0xec7a6102, "devm_kasprintf" },
	{ 0xe2d5255a, "strcmp" },
	{ 0xfb384d37, "kasprintf" },
	{ 0xda1a0029, "_dev_warn" },
	{ 0xdcb764ad, "memset" },
	{ 0x11089ac7, "_ctype" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xa6bc220e, "snd_soc_add_component_controls" },
	{ 0x249741aa, "regmap_async_complete" },
	{ 0xdd0f4668, "snd_ctl_notify" },
	{ 0x5a921311, "strncmp" },
	{ 0x85a8f9d1, "debugfs_remove" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x1de95874, "simple_open" },
	{ 0xd393d1bc, "debugfs_create_bool" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9de9e1c6, "devm_kstrdup" },
	{ 0xdb02c9fb, "snd_soc_dapm_sync" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xdc3b9d1f, "regmap_raw_write_async" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x96848186, "scnprintf" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0xb4b57e4e, "regmap_raw_read" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x61ecc1, "snd_compr_stop_error" },
	{ 0x4ee7f783, "snd_soc_component_force_enable_pin" },
	{ 0x45a55acd, "regmap_write" },
	{ 0xe433c7dd, "snd_soc_card_get_kcontrol" },
	{ 0xc6d09aa9, "release_firmware" },
};

MODULE_INFO(depends, "snd-soc-core,snd,snd-compress");


MODULE_INFO(srcversion, "138DDE08B4779A19E1367F4");
