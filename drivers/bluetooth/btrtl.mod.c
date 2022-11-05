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
	{ 0xf9a482f9, "msleep" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x43a1c1a4, "__hci_cmd_sync" },
	{ 0x214e4265, "bt_warn" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x718b8b7, "bt_info" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0x656e4a6e, "snprintf" },
	{ 0xe22d1723, "skb_put" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc6d09aa9, "release_firmware" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "AF29B80A444B91C5F9A1DD9");
