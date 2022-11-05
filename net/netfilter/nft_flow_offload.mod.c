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
	{ 0x9d0d6206, "unregister_netdevice_notifier" },
	{ 0xc09592a5, "nft_register_expr" },
	{ 0xd2da1048, "register_netdevice_notifier" },
	{ 0xe4e0dd93, "skb_copy_bits" },
	{ 0x59c04a8a, "flow_offload_free" },
	{ 0x54113cf4, "dst_release" },
	{ 0xa3afb837, "flow_offload_add" },
	{ 0xee0be5a, "flow_offload_route_init" },
	{ 0xaa8266bd, "flow_offload_alloc" },
	{ 0x47368bf4, "nf_route" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x296695f, "refcount_warn_saturate" },
	{ 0x28c6d56f, "dev_fill_forward_path" },
	{ 0x2dec9f4e, "neigh_destroy" },
	{ 0xe6911f10, "cpu_hwcap_keys" },
	{ 0x14b89635, "arm64_const_caps_ready" },
	{ 0xaeb082ad, "_raw_read_unlock_bh" },
	{ 0x8dee722d, "_raw_read_lock_bh" },
	{ 0xd367601c, "nla_put" },
	{ 0x98cf60b3, "strlen" },
	{ 0x6d7ae6a9, "nf_flow_table_cleanup" },
	{ 0x2a0ae4c7, "nf_ct_netns_get" },
	{ 0xd77358a, "nft_flowtable_lookup" },
	{ 0x46203520, "nf_tables_deactivate_flowtable" },
	{ 0xa428ee42, "nf_ct_netns_put" },
	{ 0xc23cd9bb, "nft_chain_validate_hooks" },
};

MODULE_INFO(depends, "nf_tables,nf_flow_table,nf_conntrack");


MODULE_INFO(srcversion, "224D7EA18452068A5155636");
