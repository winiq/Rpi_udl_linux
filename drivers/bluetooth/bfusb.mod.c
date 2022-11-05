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
	{ 0x254ccda4, "usb_deregister" },
	{ 0x73708729, "usb_register_driver" },
	{ 0xa611d8f, "hci_register_dev" },
	{ 0xccfdf7f, "hci_alloc_dev_priv" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x37a0cba, "kfree" },
	{ 0x43e735d6, "usb_bulk_msg" },
	{ 0x156b6ca9, "usb_control_msg" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x718b8b7, "bt_info" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb7377510, "skb_push" },
	{ 0x6c17b689, "skb_queue_head" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x4829a47e, "memcpy" },
	{ 0x24e98923, "hci_recv_frame" },
	{ 0xe22d1723, "skb_put" },
	{ 0xdd4d55b6, "_raw_read_unlock" },
	{ 0xfe8c61f0, "_raw_read_lock" },
	{ 0x37804aa, "usb_alloc_urb" },
	{ 0xd8311a9f, "skb_unlink" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xfce6b7f2, "usb_submit_urb" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0xdba32bd7, "hci_free_dev" },
	{ 0x908054df, "hci_unregister_dev" },
	{ 0x18963b97, "usb_free_urb" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x62053f52, "skb_dequeue" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0x47807871, "usb_kill_urb" },
	{ 0xeb078aee, "_raw_write_unlock_irqrestore" },
	{ 0x5021bd81, "_raw_write_lock_irqsave" },
	{ 0x6a726bed, "skb_queue_purge" },
};

MODULE_INFO(depends, "bluetooth");

MODULE_ALIAS("usb:v057Cp2200d*dc*dsc*dp*ic*isc*ip*in*");

MODULE_INFO(srcversion, "F1B78857D6FB12E14298332");
