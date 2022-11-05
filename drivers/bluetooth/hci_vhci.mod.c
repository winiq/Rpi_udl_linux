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
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0xcc26711b, "no_llseek" },
	{ 0xff0fc178, "misc_deregister" },
	{ 0xba7b3b54, "misc_register" },
	{ 0x3e26f3a0, "iov_iter_revert" },
	{ 0x24e98923, "hci_recv_frame" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xd50143cd, "_copy_from_iter" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xe22d1723, "skb_put" },
	{ 0xa611d8f, "hci_register_dev" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xccfdf7f, "hci_alloc_dev_priv" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6c17b689, "skb_queue_head" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x92540fbf, "finish_wait" },
	{ 0x8c26d495, "prepare_to_wait_event" },
	{ 0x1000e51, "schedule" },
	{ 0xfe487975, "init_wait_entry" },
	{ 0x62053f52, "skb_dequeue" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x2d3385d3, "system_wq" },
	{ 0x64522be7, "nonseekable_open" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0xcefb0c9f, "__mutex_init" },
	{ 0xd9a5ea54, "__init_waitqueue_head" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0xb7377510, "skb_push" },
	{ 0x37a0cba, "kfree" },
	{ 0xdba32bd7, "hci_free_dev" },
	{ 0x908054df, "hci_unregister_dev" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x6a726bed, "skb_queue_purge" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "A78187D837ED7C73ADC0A89");
