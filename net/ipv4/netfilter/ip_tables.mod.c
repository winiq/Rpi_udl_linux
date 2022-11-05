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
	{ 0xa24f23d8, "__request_module" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0xbba6a181, "xt_unregister_table" },
	{ 0xa7c94f1d, "xt_compat_lock" },
	{ 0xddf68fc6, "xt_find_revision" },
	{ 0x7aa1756e, "kvfree" },
	{ 0x9e4441dd, "xt_check_target" },
	{ 0x4c705db5, "xt_register_matches" },
	{ 0x999860e0, "xt_compat_match_offset" },
	{ 0x9c995c69, "xt_percpu_counter_alloc" },
	{ 0x5a52ed57, "xt_compat_target_to_user" },
	{ 0x12a4e128, "__arch_copy_from_user" },
	{ 0xd87ae60d, "xt_check_entry_offsets" },
	{ 0xff206e77, "xt_proto_fini" },
	{ 0x94169990, "xt_table_unlock" },
	{ 0x56470118, "__warn_printk" },
	{ 0x66b4cc41, "kmemdup" },
	{ 0xd21dfe8, "xt_compat_target_offset" },
	{ 0xcb3e91cc, "xt_counters_alloc" },
	{ 0x999e8297, "vfree" },
	{ 0xc38259af, "__this_cpu_preempt_check" },
	{ 0xe4949124, "xt_find_table_lock" },
	{ 0x49b6b9ec, "xt_replace_table" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x78bb8af6, "xt_proto_init" },
	{ 0x3278cec3, "xt_register_table" },
	{ 0xd9bb821b, "xt_copy_counters" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xb03cfc55, "xt_target_to_user" },
	{ 0xd7f5fcd, "xt_alloc_entry_offsets" },
	{ 0x1b45617c, "xt_compat_match_to_user" },
	{ 0xdcb764ad, "memset" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0xff0e7478, "unregister_pernet_subsys" },
	{ 0x3c3fce39, "__local_bh_enable_ip" },
	{ 0x449ad0a7, "memcmp" },
	{ 0xa25fc115, "xt_compat_check_entry_offsets" },
	{ 0xd93c033c, "nf_unregister_net_hooks" },
	{ 0x638c7455, "ns_capable" },
	{ 0x68921f19, "xt_register_targets" },
	{ 0xc917e655, "debug_smp_processor_id" },
	{ 0x6097ecb1, "xt_compat_target_from_user" },
	{ 0x9166fada, "strncpy" },
	{ 0x78d96849, "nf_log_trace" },
	{ 0x4e27719, "xt_compat_flush_offsets" },
	{ 0xc7fae024, "xt_compat_calc_jump" },
	{ 0x807d2b2c, "xt_recseq" },
	{ 0x43bcd2f6, "xt_unregister_targets" },
	{ 0x50873741, "xt_compat_init_offsets" },
	{ 0x6587c97e, "module_put" },
	{ 0x823edea5, "xt_compat_add_offset" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x73309694, "nf_register_net_hooks" },
	{ 0x6cbbfc54, "__arch_copy_to_user" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xab30d1c8, "nf_unregister_sockopt" },
	{ 0x92997ed8, "_printk" },
	{ 0xd3fcc511, "xt_tee_enabled" },
	{ 0x7adcfd84, "xt_request_find_match" },
	{ 0x202ee17, "xt_request_find_table_lock" },
	{ 0x20de78d9, "register_pernet_subsys" },
	{ 0xaa3a1682, "xt_find_table" },
	{ 0xd6e7200f, "xt_unregister_matches" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x811a363a, "xt_request_find_target" },
	{ 0xf6ebc03b, "net_ratelimit" },
	{ 0x31b9195c, "__local_bh_disable_ip" },
	{ 0x225ab4d1, "xt_compat_match_from_user" },
	{ 0x70c52dc5, "nf_skb_duplicated" },
	{ 0x4829a47e, "memcpy" },
	{ 0xdb51109c, "xt_check_match" },
	{ 0xfef779fa, "xt_find_jump_offset" },
	{ 0x3bf9d084, "xt_check_table_hooks" },
	{ 0xbfacb837, "xt_percpu_counter_free" },
	{ 0x74c134b9, "__sw_hweight32" },
	{ 0xcf0a0f79, "nf_register_sockopt" },
	{ 0x977fd4bf, "xt_alloc_table_info" },
	{ 0x4bfd0a27, "xt_match_to_user" },
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0xe204e042, "xt_free_table_info" },
	{ 0xd1e246a2, "xt_compat_unlock" },
	{ 0xe914e41e, "strcpy" },
};

MODULE_INFO(depends, "x_tables");


MODULE_INFO(srcversion, "5151EB1B988FE809689B405");
