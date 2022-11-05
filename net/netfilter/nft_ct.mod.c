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
	{ 0x2a611f13, "nft_unregister_expr" },
	{ 0x4f7f5e63, "nft_unregister_obj" },
	{ 0x6c519fff, "nft_register_obj" },
	{ 0xc09592a5, "nft_register_expr" },
	{ 0x2bf17552, "nf_ct_ext_add" },
	{ 0xf43672f0, "nf_connlabels_replace" },
	{ 0x82baa22e, "init_net" },
	{ 0xe2b8cc13, "nft_parse_register_load" },
	{ 0x7c4c00b7, "nf_connlabels_get" },
	{ 0x244edca8, "nf_connlabels_put" },
	{ 0x3213f038, "mutex_unlock" },
	{ 0x4dfa8d4b, "mutex_lock" },
	{ 0x3b08a8f0, "nf_ct_destroy" },
	{ 0x138bdd96, "cpumask_next" },
	{ 0x3928efe9, "__per_cpu_offset" },
	{ 0x17de3d5, "nr_cpu_ids" },
	{ 0xa5f7cf37, "__cpu_possible_mask" },
	{ 0xe84c082, "nf_ct_tmpl_alloc" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xf70e4a4d, "preempt_schedule_notrace" },
	{ 0x98cf60b3, "strlen" },
	{ 0x4829a47e, "memcpy" },
	{ 0x37befc70, "jiffies_to_msecs" },
	{ 0x9166fada, "strncpy" },
	{ 0xf654da55, "nf_ct_get_id" },
	{ 0x9e70eed6, "nft_parse_register_store" },
	{ 0xb9154e68, "nft_dump_register" },
	{ 0xb7fba7eb, "nf_ct_set_auto_assign_helper_warned" },
	{ 0x67945f10, "nf_conntrack_helper_try_module_get" },
	{ 0x84823cf3, "nla_strscpy" },
	{ 0xf7a76878, "nf_conntrack_helper_put" },
	{ 0xe6462f42, "nf_ct_expect_related_report" },
	{ 0x15ba50a6, "jiffies" },
	{ 0x786270c, "nf_ct_expect_init" },
	{ 0xcfa9ba77, "nf_ct_expect_alloc" },
	{ 0xf2190e85, "nf_ct_helper_ext_add" },
	{ 0x2a0ae4c7, "nf_ct_netns_get" },
	{ 0xa428ee42, "nf_ct_netns_put" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0xd367601c, "nla_put" },
};

MODULE_INFO(depends, "nf_tables,nf_conntrack");


MODULE_INFO(srcversion, "68E58905CBBD8EC75A978CC");
