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
	{ 0x63d7d6d6, "xt_unregister_target" },
	{ 0xa24f23d8, "__request_module" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xd6ee688f, "vmalloc" },
	{ 0xa7c94f1d, "xt_compat_lock" },
	{ 0x98cf60b3, "strlen" },
	{ 0x9e4441dd, "xt_check_target" },
	{ 0x999860e0, "xt_compat_match_offset" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xd21dfe8, "xt_compat_target_offset" },
	{ 0x7bce4603, "xt_data_to_user" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x999e8297, "vfree" },
	{ 0xdd64e639, "strscpy" },
	{ 0xe2d5255a, "strcmp" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xdcb764ad, "memset" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0xff0e7478, "unregister_pernet_subsys" },
	{ 0xb44e18ea, "audit_enabled" },
	{ 0xd93c033c, "nf_unregister_net_hooks" },
	{ 0x638c7455, "ns_capable" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x5792f848, "strlcpy" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x2469810f, "__rcu_read_unlock" },
	{ 0x4e27719, "xt_compat_flush_offsets" },
	{ 0xc7fae024, "xt_compat_calc_jump" },
	{ 0x2e6b36a6, "xt_register_target" },
	{ 0x50873741, "xt_compat_init_offsets" },
	{ 0x6587c97e, "module_put" },
	{ 0x823edea5, "xt_compat_add_offset" },
	{ 0x73309694, "nf_register_net_hooks" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xab30d1c8, "nf_unregister_sockopt" },
	{ 0x92997ed8, "_printk" },
	{ 0x7adcfd84, "xt_request_find_match" },
	{ 0x20de78d9, "register_pernet_subsys" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x811a363a, "xt_request_find_target" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0xe7ab1ecc, "_raw_write_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0xae04012c, "__vmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdb51109c, "xt_check_match" },
	{ 0x51a511eb, "_raw_write_lock_bh" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xcf0a0f79, "nf_register_sockopt" },
	{ 0x52bedc9e, "xt_find_match" },
	{ 0x8d522714, "__rcu_read_lock" },
	{ 0x9968aacb, "__audit_log_nfcfg" },
	{ 0x23fd3028, "vmalloc_node" },
	{ 0xd1e246a2, "xt_compat_unlock" },
	{ 0x3f9f7d3b, "try_module_get" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "157DDF5BAD4E77BAA8019DF");
