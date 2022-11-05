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
	{ 0x75a97e13, "sock_init_data" },
	{ 0x53b954a2, "up_read" },
	{ 0x2200632e, "kernel_sendmsg" },
	{ 0x8f8d542f, "sockfd_lookup" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xe8643954, "sock_no_getname" },
	{ 0xcd5a959d, "param_ops_bool" },
	{ 0x6cf03572, "bt_sock_register" },
	{ 0xe929fd4a, "kthread_create_on_node" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x668b19a1, "down_read" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0x718b8b7, "bt_info" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0x2973900, "sock_no_mmap" },
	{ 0x8be5359e, "sock_no_recvmsg" },
	{ 0xcfb7f3a8, "bt_sock_unlink" },
	{ 0xfdf38fbf, "netif_rx_ni" },
	{ 0x54eb49b8, "sock_no_socketpair" },
	{ 0x120b6fcc, "netif_tx_wake_queue" },
	{ 0x3b448e09, "sk_alloc" },
	{ 0xa73c1905, "l2cap_is_socket" },
	{ 0xbc40c074, "sock_no_bind" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x7b5ce5c3, "baswap" },
	{ 0x9b7ac50b, "free_netdev" },
	{ 0x2d2d6857, "register_netdev" },
	{ 0x6792ac5a, "sock_no_listen" },
	{ 0x757295ac, "sock_no_accept" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x26509068, "sk_free" },
	{ 0x8fea24bd, "bt_sock_unregister" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xce807a25, "up_write" },
	{ 0x82baa22e, "init_net" },
	{ 0x57bc19d2, "down_write" },
	{ 0xa5c5220d, "fput" },
	{ 0xd6d87f25, "sock_no_shutdown" },
	{ 0x359afe9f, "bt_sock_link" },
	{ 0x6587c97e, "module_put" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0xc6cbbc89, "capable" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x3e642ffa, "proto_register" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x6df5faac, "proto_unregister" },
	{ 0xa2cfa672, "alloc_netdev_mqs" },
	{ 0x21d63b46, "eth_type_trans" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x71a1306d, "__module_put_and_exit" },
	{ 0x7d8caeb9, "wake_up_process" },
	{ 0xc81758e5, "ether_setup" },
	{ 0xdd981006, "__module_get" },
	{ 0x3eeb2322, "__wake_up" },
	{ 0x94198759, "sock_no_connect" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x340475e5, "eth_validate_addr" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x4829a47e, "memcpy" },
	{ 0x4df02057, "crc32_be" },
	{ 0xa951517, "sock_no_sendmsg" },
	{ 0xf33d52d1, "set_user_nice" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x70c0eefd, "bt_procfs_init" },
	{ 0x62053f52, "skb_dequeue" },
	{ 0x3c35d75a, "unregister_netdev" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xdf22378, "bt_procfs_cleanup" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "bluetooth");


MODULE_INFO(srcversion, "5821AE4CBD3875CFD443982");
