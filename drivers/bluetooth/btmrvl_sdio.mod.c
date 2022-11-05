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
	{ 0xdb366aab, "sdio_unregister_driver" },
	{ 0xba9c29b4, "sdio_register_driver" },
	{ 0xa6c96402, "_dev_err" },
	{ 0xfa83ba14, "btmrvl_register_hdev" },
	{ 0xe36e127c, "btmrvl_add_card" },
	{ 0x801cf27e, "devm_request_threaded_irq" },
	{ 0xd6748ca5, "irq_of_parse_and_map" },
	{ 0x818880ec, "of_match_node" },
	{ 0xc6d09aa9, "release_firmware" },
	{ 0x9eb7065e, "kmem_cache_alloc_trace" },
	{ 0x6162d11a, "kmalloc_caches" },
	{ 0xb1647b6e, "request_firmware" },
	{ 0x7bb83659, "sdio_set_block_size" },
	{ 0x23327ede, "sdio_claim_irq" },
	{ 0x94e2491b, "sdio_enable_func" },
	{ 0xc6f3cca5, "devm_kmalloc" },
	{ 0x37a0cba, "kfree" },
	{ 0xe1dcef76, "sdio_writesb" },
	{ 0xeb233a45, "__kmalloc" },
	{ 0x24e98923, "hci_recv_frame" },
	{ 0xcc853d3a, "btmrvl_check_evtpkt" },
	{ 0x1e629be2, "btmrvl_process_event" },
	{ 0x48a1ca87, "skb_pull" },
	{ 0xe22d1723, "skb_put" },
	{ 0x5f4d873f, "__alloc_skb" },
	{ 0xdd212685, "kfree_skb_reason" },
	{ 0xeae3dfd6, "__const_udelay" },
	{ 0x12c081a6, "btmrvl_send_module_cfg_cmd" },
	{ 0x5fad2cfc, "btmrvl_remove_card" },
	{ 0xdde38b87, "dev_coredumpv" },
	{ 0x4829a47e, "memcpy" },
	{ 0x96848186, "scnprintf" },
	{ 0x98cf60b3, "strlen" },
	{ 0x40a9b349, "vzalloc" },
	{ 0x999e8297, "vfree" },
	{ 0xc3055d20, "usleep_range_state" },
	{ 0x677d2f3b, "btmrvl_interrupt" },
	{ 0xd35cce70, "_raw_spin_unlock_irqrestore" },
	{ 0x34db050b, "_raw_spin_lock_irqsave" },
	{ 0x6e1ead94, "sdio_readsb" },
	{ 0xf9a482f9, "msleep" },
	{ 0x27bbf221, "disable_irq_nosync" },
	{ 0xae102ed8, "_dev_info" },
	{ 0x161a1171, "sdio_disable_func" },
	{ 0x2a991dac, "sdio_release_irq" },
	{ 0x96198230, "sdio_set_host_pm_flags" },
	{ 0x888f5e57, "btmrvl_enable_hs" },
	{ 0x9585ce13, "hci_suspend_dev" },
	{ 0xfcec0987, "enable_irq" },
	{ 0x3ce4ca6f, "disable_irq" },
	{ 0xce2840e7, "irq_set_irq_wake" },
	{ 0x94d6da0b, "hci_resume_dev" },
	{ 0x866ab8f5, "sdio_get_host_pm_caps" },
	{ 0x718b8b7, "bt_info" },
	{ 0xfa5275a0, "sdio_readb" },
	{ 0xdfe036d8, "sdio_f0_readb" },
	{ 0x3c3ff9fd, "sprintf" },
	{ 0xdcb764ad, "memset" },
	{ 0x8da6585d, "__stack_chk_fail" },
	{ 0x7b8c32f1, "bt_err" },
	{ 0xb4a2de5c, "sdio_release_host" },
	{ 0x9ba164b8, "sdio_writeb" },
	{ 0x431b0b69, "sdio_claim_host" },
};

MODULE_INFO(depends, "btmrvl,bluetooth");

MODULE_ALIAS("sdio:c*v02DFd9105*");
MODULE_ALIAS("sdio:c*v02DFd911A*");
MODULE_ALIAS("sdio:c*v02DFd911B*");
MODULE_ALIAS("sdio:c*v02DFd912A*");
MODULE_ALIAS("sdio:c*v02DFd9136*");
MODULE_ALIAS("sdio:c*v02DFd912E*");
MODULE_ALIAS("sdio:c*v02DFd9146*");
MODULE_ALIAS("sdio:c*v02DFd914A*");
MODULE_ALIAS("sdio:c*v02DFd9142*");

MODULE_INFO(srcversion, "FC5B7AFB277A64632424B95");
