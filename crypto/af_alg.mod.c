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
	{ 0xcdeede81, "release_sock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x75a97e13, "sock_init_data" },
	{ 0xf888ca21, "sg_init_table" },
	{ 0x53b954a2, "up_read" },
	{ 0x3e26f3a0, "iov_iter_revert" },
	{ 0x7f871508, "sock_no_ioctl" },
	{ 0x37110088, "remove_wait_queue" },
	{ 0xb308c97d, "wait_woken" },
	{ 0xd50143cd, "_copy_from_iter" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xe8643954, "sock_no_getname" },
	{ 0x87b8798d, "sg_next" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x668b19a1, "down_read" },
	{ 0x41e2708e, "sock_no_sendpage" },
	{ 0xe06141e9, "security_sk_clone" },
	{ 0x2973900, "sock_no_mmap" },
	{ 0x8be5359e, "sock_no_recvmsg" },
	{ 0x55c41d22, "__alloc_pages" },
	{ 0xdcb764ad, "memset" },
	{ 0x54eb49b8, "sock_no_socketpair" },
	{ 0x3b448e09, "sk_alloc" },
	{ 0xf4b0fcac, "lock_sock_nested" },
	{ 0xda226a29, "iov_iter_get_pages" },
	{ 0x6792ac5a, "sock_no_listen" },
	{ 0x7bd392d6, "sock_wake_async" },
	{ 0x26509068, "sk_free" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0xd71aac45, "sock_kfree_s" },
	{ 0xd6d87f25, "sock_no_shutdown" },
	{ 0x6587c97e, "module_put" },
	{ 0xba220db7, "__wake_up_sync_key" },
	{ 0xd0654aba, "woken_wake_function" },
	{ 0x3e642ffa, "proto_register" },
	{ 0xdf76e8c0, "__free_pages" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xcb456a92, "sock_register" },
	{ 0x6df5faac, "proto_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0xba57a578, "sock_kmalloc" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x94198759, "sock_no_connect" },
	{ 0x4afb2238, "add_wait_queue" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0xa951517, "sock_no_sendmsg" },
	{ 0x1a28de3, "sock_kzfree_s" },
	{ 0xa32c31ff, "iov_iter_advance" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x6197c046, "__put_page" },
	{ 0x3f9f7d3b, "try_module_get" },
	{ 0xda10ec3, "security_sock_graft" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "6670AEEAD9116012651EDD8");
