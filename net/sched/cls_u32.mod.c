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
	{ 0xeef9fbc5, "unregister_tcf_proto_ops" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x83564775, "register_tcf_proto_ops" },
	{ 0x599fb41c, "kvmalloc_node" },
	{ 0x949f7342, "__alloc_percpu" },
	{ 0xd9916c3a, "idr_alloc_u32" },
	{ 0x7b82b9a1, "idr_replace" },
	{ 0x4829a47e, "memcpy" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xe6d2458e, "do_trace_netlink_extack" },
	{ 0x56470118, "__warn_printk" },
	{ 0xf66193d7, "__dev_get_by_name" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0xe46021ca, "_raw_spin_unlock_bh" },
	{ 0xc3690fc, "_raw_spin_lock_bh" },
	{ 0x85670f1d, "rtnl_is_locked" },
	{ 0x775fcb7c, "tcf_exts_validate" },
	{ 0x91f44510, "idr_alloc_cyclic" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0x92997ed8, "_printk" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0xeb63b8ed, "tcf_action_exec" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0x8e17b3ae, "idr_destroy" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0x7665a95b, "idr_remove" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xc9ec4e21, "free_percpu" },
	{ 0x507945b0, "__put_net" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x98cf60b3, "strlen" },
	{ 0xa9019dcf, "__dev_get_by_index" },
	{ 0x8ce84b5e, "tcf_exts_dump_stats" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0xe6c36109, "tcf_exts_dump" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xd367601c, "nla_put" },
	{ 0x59de47f5, "tc_setup_cb_add" },
	{ 0xdbc45ce0, "tc_setup_cb_call" },
	{ 0x37a0cba, "kfree" },
	{ 0x1c7c99f4, "tcf_exts_destroy" },
	{ 0xd73e30f7, "tc_setup_cb_destroy" },
	{ 0x9e2b9229, "tc_setup_cb_reoffload" },
	{ 0x8da6585d, "__stack_chk_fail" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "3FDF52108FED3EA1FEACE01");
