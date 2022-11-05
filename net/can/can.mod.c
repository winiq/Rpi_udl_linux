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
	{ 0x42422d4a, "kmem_cache_destroy" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x75a97e13, "sock_init_data" },
	{ 0x826655e4, "param_ops_int" },
	{ 0x91eb9b4, "round_jiffies" },
	{ 0x60a13e90, "rcu_barrier" },
	{ 0xbedb1058, "_proc_mkdir" },
	{ 0xe2fc96c9, "seq_puts" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xc3d1c011, "skb_clone" },
	{ 0xdd3bf30b, "proc_create_net_single" },
	{ 0xc6e1284c, "seq_printf" },
	{ 0xf2f2b453, "remove_proc_entry" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x28aa6a67, "call_rcu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x179b6ebe, "PDE_DATA" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x6a726bed, "skb_queue_purge" },
	{ 0x4249472a, "sock_efree" },
	{ 0xfdf38fbf, "netif_rx_ni" },
	{ 0xff0e7478, "unregister_pernet_subsys" },
	{ 0x3b448e09, "sk_alloc" },
	{ 0x8b8222b7, "seq_putc" },
	{ 0xb6d6ea8f, "kmem_cache_free" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x26509068, "sk_free" },
	{ 0x9181420b, "dev_remove_pack" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x6091797f, "synchronize_rcu" },
	{ 0x6587c97e, "module_put" },
	{ 0x3e642ffa, "proto_register" },
	{ 0xd5b24a63, "kmem_cache_alloc" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xcb456a92, "sock_register" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0xb8b9f817, "kmalloc_order_trace" },
	{ 0x6df5faac, "proto_unregister" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x20de78d9, "register_pernet_subsys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xb7c3f821, "kmem_cache_create" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x62737e1d, "sock_unregister" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x91453ce, "dev_add_pack" },
	{ 0x5c34178d, "consume_skb" },
	{ 0x20d541e4, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x3f9f7d3b, "try_module_get" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "D8D3C2272470A2FDABE3917");
