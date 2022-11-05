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
	{ 0xf905897c, "stp_proto_unregister" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x56470118, "__warn_printk" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x97936972, "dev_mc_add" },
	{ 0xece784c2, "rb_first" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x50ee1daa, "stp_proto_register" },
	{ 0x449ad0a7, "memcmp" },
	{ 0x348b4f3e, "llc_mac_hdr_init" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xb413691c, "dev_mc_del" },
	{ 0xb7377510, "skb_push" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0xfda9581f, "prandom_u32" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xe26e0a8a, "skb_queue_tail" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xba8fbd64, "_raw_spin_lock" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xca9360b5, "rb_next" },
	{ 0x62053f52, "skb_dequeue" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x7f02188f, "__msecs_to_jiffies" },
	{ 0x20d541e4, "dev_queue_xmit" },
	{ 0xb92873bd, "param_ops_uint" },
};

MODULE_INFO(depends, "stp,llc");


MODULE_INFO(srcversion, "AA122B7A403CDAD497C9DEA");
