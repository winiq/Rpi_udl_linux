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
	{ 0x6091797f, "synchronize_rcu" },
	{ 0xff0e7478, "unregister_pernet_subsys" },
	{ 0xb0443cda, "nfnetlink_subsys_unregister" },
	{ 0x20de78d9, "register_pernet_subsys" },
	{ 0x92997ed8, "_printk" },
	{ 0x9a1c71a8, "nfnetlink_subsys_register" },
	{ 0xb7dfcbe9, "nf_ct_iterate_cleanup_net" },
	{ 0xe41fd9ff, "nf_ct_remove_expectations" },
	{ 0x6b14a8d8, "nf_conntrack_eventmask_report" },
	{ 0x24d273d1, "add_timer" },
	{ 0xb8b4a81, "__nf_ct_expect_find" },
	{ 0xe6462f42, "nf_ct_expect_related_report" },
	{ 0xc18ac88d, "nf_ct_expect_hsize" },
	{ 0xec8beba6, "nf_ct_expect_hash" },
	{ 0x4e74c00c, "nf_ct_delete" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0xb5b54b34, "_raw_spin_unlock" },
	{ 0x28eff409, "nf_conntrack_hash" },
	{ 0xdba7326b, "nf_conntrack_lock" },
	{ 0xaf0847f0, "nf_conntrack_locks" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x8ffe7e89, "nf_conntrack_htable_size" },
	{ 0xd0a04e39, "nfnetlink_unicast" },
	{ 0xf38bcdf3, "nf_conntrack_max" },
	{ 0xb3964032, "nf_conntrack_count" },
	{ 0x4a87ddd5, "nfnetlink_set_err" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0x3799c68e, "nfnetlink_has_listeners" },
	{ 0x8be335a1, "nfnetlink_send" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0xba53adab, "nla_policy_len" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x401d3b4d, "nf_conntrack_hash_check_insert" },
	{ 0xc4f0da12, "ktime_get_with_offset" },
	{ 0xc9d3af78, "nf_conntrack_find_get" },
	{ 0x2bf17552, "nf_ct_ext_add" },
	{ 0x434c030c, "__nf_ct_try_assign_helper" },
	{ 0xf29a8b05, "nf_conntrack_free" },
	{ 0xf2190e85, "nf_ct_helper_ext_add" },
	{ 0x14c2772d, "__nf_conntrack_helper_find" },
	{ 0x845d2bc8, "nf_conntrack_alloc" },
	{ 0x8b234d0a, "nla_put_64bit" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0x9ab4b8a5, "__nlmsg_put" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x904fb277, "nf_ct_helper_expectfn_find_by_symbol" },
	{ 0x98cf60b3, "strlen" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x37a0cba, "kfree" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x5ce3b588, "nfnl_lock" },
	{ 0xa24f23d8, "__request_module" },
	{ 0xdb065657, "nfnl_unlock" },
	{ 0xa470d75d, "nf_nat_hook" },
	{ 0xa1b46826, "nf_ct_helper_expectfn_find_by_name" },
	{ 0xcfa9ba77, "nf_ct_expect_alloc" },
	{ 0x3239b42f, "nf_ct_expect_iterate_net" },
	{ 0xf152cd62, "nf_ct_unlink_expect_report" },
	{ 0x2b68bd2f, "del_timer" },
	{ 0x9adb7399, "nf_conntrack_expect_lock" },
	{ 0xe47cee7d, "nf_ct_expect_find_get" },
	{ 0xf1db1704, "nla_memcpy" },
	{ 0xf43672f0, "nf_connlabels_replace" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x431ec3a9, "__nla_validate" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x824834fe, "nf_ct_expect_put" },
	{ 0xcbdda75c, "__netlink_dump_start" },
	{ 0xf654da55, "nf_ct_get_id" },
	{ 0x9158ff3f, "__do_once_done" },
	{ 0x41ed3709, "get_random_bytes" },
	{ 0x18e60984, "__do_once_start" },
	{ 0xe17678a, "siphash_4u64" },
	{ 0xe4262c6, "__siphash_unaligned" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x15ba50a6, "jiffies" },
	{ 0xd367601c, "nla_put" },
	{ 0x7bed539c, "nf_ct_l4proto_find" },
	{ 0xfb81a57a, "nf_conntrack_register_notifier" },
	{ 0xbfe1b38b, "nf_conntrack_unregister_notifier" },
};

MODULE_INFO(depends, "nfnetlink,nf_conntrack");


MODULE_INFO(srcversion, "B133F039C7C5275BB7101AE");
