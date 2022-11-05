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
	{ 0x2453a8b0, "unregister_qdisc" },
	{ 0x42422d4a, "kmem_cache_destroy" },
	{ 0x28e76045, "register_qdisc" },
	{ 0xb7c3f821, "kmem_cache_create" },
	{ 0x63198da0, "qdisc_watchdog_init_clockid" },
	{ 0x92997ed8, "_printk" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0xcc8302e9, "qdisc_tree_reduce_backlog" },
	{ 0xf1969a8e, "__usecs_to_jiffies" },
	{ 0x1d24c881, "___ratelimit" },
	{ 0x420964e3, "__nla_parse" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x56470118, "__warn_printk" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x464f2dc3, "gnet_stats_copy_app" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0x262c2199, "qdisc_watchdog_schedule_range_ns" },
	{ 0xd72c6971, "qdisc_watchdog_cancel" },
	{ 0x7aa1756e, "kvfree" },
	{ 0xb6d6ea8f, "kmem_cache_free" },
	{ 0xde7aa992, "kmem_cache_free_bulk" },
	{ 0x9ac478ac, "__skb_get_hash" },
	{ 0xb43f9365, "ktime_get" },
	{ 0xd5b24a63, "kmem_cache_alloc" },
	{ 0xa5526619, "rb_insert_color" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x994395ed, "rtnl_kfree_skbs" },
	{ 0x4d9b652b, "rb_erase" },
	{ 0xca9360b5, "rb_next" },
	{ 0xece784c2, "rb_first" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7f24de73, "jiffies_to_usecs" },
	{ 0xd367601c, "nla_put" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "2E6AFCCB9668295DDAC4660");
