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
	{ 0x83564775, "register_tcf_proto_ops" },
	{ 0x18d63783, "tcf_block_netif_keep_dst" },
	{ 0xc6f46339, "init_timer_key" },
	{ 0x775fcb7c, "tcf_exts_validate" },
	{ 0xa721ee74, "tcf_em_tree_validate" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0x420964e3, "__nla_parse" },
	{ 0xbaf22757, "kvfree_call_rcu" },
	{ 0xefaf2e4f, "tcf_queue_work" },
	{ 0x9ac478ac, "__skb_get_hash" },
	{ 0x8da16983, "__skb_flow_dissect" },
	{ 0xc9831ad7, "flow_keys_dissector" },
	{ 0x2100b272, "__tcf_em_tree_match" },
	{ 0x535c525f, "from_kuid" },
	{ 0x83554cac, "from_kgid" },
	{ 0xc514b829, "init_user_ns" },
	{ 0xeb63b8ed, "tcf_action_exec" },
	{ 0x5a99a0d7, "flow_get_u32_dst" },
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0x6e720ff2, "rtnl_unlock" },
	{ 0xc7a4fbed, "rtnl_lock" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x507945b0, "__put_net" },
	{ 0x37a0cba, "kfree" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0x7066df45, "tcf_em_tree_destroy" },
	{ 0x1c7c99f4, "tcf_exts_destroy" },
	{ 0x97934ecf, "del_timer_sync" },
	{ 0x6514c1e6, "flow_get_u32_src" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x9ecf4732, "skb_trim" },
	{ 0x8ce84b5e, "tcf_exts_dump_stats" },
	{ 0xc77c5852, "tcf_em_tree_dump" },
	{ 0xe6c36109, "tcf_exts_dump" },
	{ 0xd367601c, "nla_put" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xc38c83b8, "mod_timer" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x41ed3709, "get_random_bytes" },
};

MODULE_INFO(depends, "");


MODULE_INFO(srcversion, "F36093EED7715C9811A805F");
