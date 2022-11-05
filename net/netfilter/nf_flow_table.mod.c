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
	{ 0x2d3385d3, "system_wq" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xf188a662, "rhashtable_walk_exit" },
	{ 0x53b954a2, "up_read" },
	{ 0xb7f990e9, "rht_bucket_nested" },
	{ 0x47884890, "system_power_efficient_wq" },
	{ 0x54651f9b, "rhashtable_walk_next" },
	{ 0x54113cf4, "dst_release" },
	{ 0xffeedf6a, "delayed_work_timer_fn" },
	{ 0x7fbe24bb, "nf_ct_acct_add" },
	{ 0x4d54ba2e, "inet_proto_csum_replace4" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x9fa7184a, "cancel_delayed_work_sync" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x2dec9f4e, "neigh_destroy" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xe0313d71, "rhashtable_insert_slow" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x4e0fed95, "inet_proto_csum_replace16" },
	{ 0x668b19a1, "down_read" },
	{ 0x2a5ea9ef, "rhashtable_destroy" },
	{ 0xa973d4a4, "__pskb_pull_tail" },
	{ 0xb202f0d7, "rht_bucket_nested_insert" },
	{ 0x706c5a65, "preempt_count_sub" },
	{ 0x9cd7551a, "rhashtable_walk_stop" },
	{ 0xc469b121, "flow_indr_dev_setup_offload" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x9a5dce5c, "rhashtable_walk_start_check" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x8c03d20c, "destroy_workqueue" },
	{ 0xc4284bd3, "dev_get_by_index_rcu" },
	{ 0xc2a1a804, "dev_get_by_index" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x43b0c9c3, "preempt_schedule" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0xce807a25, "up_write" },
	{ 0x57bc19d2, "down_write" },
	{ 0x42160169, "flush_workqueue" },
	{ 0xb2fcb56d, "queue_delayed_work_on" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xb5e73116, "flush_delayed_work" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14c0ae9b, "pskb_expand_head" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0xe5ce1a56, "rhashtable_walk_enter" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x4b5acf74, "rhashtable_init" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x37a0cba, "kfree" },
	{ 0x8bf55bad, "flow_block_cb_free" },
	{ 0x3edc5b1c, "neigh_xmit" },
	{ 0xc5b6f236, "queue_work_on" },
	{ 0x20d541e4, "dev_queue_xmit" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0xf229424a, "preempt_count_add" },
	{ 0xaa19bde1, "skb_gso_validate_network_len" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xd0d156e9, "__rht_bucket_nested" },
	{ 0x49cd25ed, "alloc_workqueue" },
	{ 0x7b4da6ff, "__init_rwsem" },
	{ 0x9f1c4d29, "flow_rule_alloc" },
	{ 0x200b2041, "in6addr_any" },
};

MODULE_INFO(depends, "nf_conntrack");


MODULE_INFO(srcversion, "97CBDDE458D5AFC2785277A");
