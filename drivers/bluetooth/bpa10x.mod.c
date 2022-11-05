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
	{ 0x8125a88d, "hci_recv_diag" },
	{ 0x254ccda4, "usb_deregister" },
	{ 0x73708729, "usb_register_driver" },
	{ 0xa611d8f, "hci_register_dev" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xccfdf7f, "hci_alloc_dev_priv" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0x4829a47e, "memcpy" },
	{ 0xe22d1723, "skb_put" },
	{ 0x24e98923, "hci_recv_frame" },
	{ 0x962c8ae1, "usb_kill_anchored_urbs" },
	{ 0xc5fcb0cd, "hci_set_fw_info" },
	{ 0x718b8b7, "bt_info" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x7e009d2, "usb_unanchor_urb" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x2f5da2fc, "usb_anchor_urb" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0xb7377510, "skb_push" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0x37a0cba, "kfree" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x43a1c1a4, "__hci_cmd_sync" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0xdba32bd7, "hci_free_dev" },
	{ 0x908054df, "hci_unregister_dev" },
};

MODULE_INFO(depends, "bluetooth");

MODULE_ALIAS("usb:v08FDp0002d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "BF51CB52DB71FAB2B1CE0D5");
