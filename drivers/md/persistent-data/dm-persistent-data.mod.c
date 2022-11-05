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
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x74dcd98c, "dm_bufio_get_aux_data" },
	{ 0xd991e3b9, "dm_bufio_get_device_size" },
	{ 0xc0d7df85, "dm_bufio_new" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0xa82b2066, "dm_bufio_write_dirty_buffers" },
	{ 0xb15b4109, "crc32c" },
	{ 0xdcb764ad, "memset" },
	{ 0x7c381a76, "dm_bufio_get_block_size" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xe6024e59, "dm_bufio_release" },
	{ 0x3f7cc1e9, "dm_bufio_client_create" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xebcc64a4, "dm_bufio_get_block_data" },
	{ 0xeca7949e, "dm_bufio_client_destroy" },
	{ 0x2e0774dc, "dm_bufio_get_block_number" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xb04f56ab, "dm_bufio_read" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xad0dc4f, "dm_bufio_mark_buffer_dirty" },
	{ 0x24772bfe, "dm_bufio_get" },
	{ 0xc90df7e5, "dm_bufio_prefetch" },
	{ 0x6d3f57bd, "dm_bufio_get_client" },
	{ 0x5a9f1d63, "memmove" },
	{ 0x14b89635, "arm64_const_caps_ready" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D592038CE09B618FB32A2F7");
