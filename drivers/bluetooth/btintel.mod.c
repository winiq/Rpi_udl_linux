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
	{ 0xf9a482f9, "msleep" },
	{ 0x43a1c1a4, "__hci_cmd_sync" },
	{ 0xa0fbac79, "wake_up_bit" },
	{ 0x56470118, "__warn_printk" },
	{ 0xb43f9365, "ktime_get" },
	{ 0x44bae227, "bit_wait_timeout" },
	{ 0x1aa8cd26, "__hci_cmd_sync_ev" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x7aad008b, "bt_to_errno" },
	{ 0x718b8b7, "bt_info" },
	{ 0xbb629917, "__regmap_init" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x4071b517, "out_of_line_wait_on_bit_timeout" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xa31a93ea, "request_firmware_direct" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x92e652c, "hci_cmd_sync" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0x656e4a6e, "snprintf" },
	{ 0x31e0b1f1, "firmware_request_nowarn" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xc6d09aa9, "release_firmware" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "F110A36B013389D3EE9B4EC");
